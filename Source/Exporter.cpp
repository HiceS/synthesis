#include "Exporter.h"

using namespace Synthesis;

Exporter::Exporter(Ptr<Application> app) : fusionApplication(app)
{}

Exporter::~Exporter()
{}

std::string Synthesis::Exporter::collectJoints()
{
	Ptr<FusionDocument> document = fusionApplication->activeDocument();

	std::string stringifiedJoints;

	std::vector<Ptr<Joint>> allJoints = document->design()->rootComponent()->allJoints();

	for (Ptr<Joint> joint : allJoints)
	{
		std::string pointerStr = "";

		Ptr<Occurrence> occurence = joint->occurrenceOne();

		for (int b = 0; b < sizeof(Ptr<Occurrence>); b++)
			pointerStr += ((char*)(& occurence))[b];

		stringifiedJoints += joint->occurrenceOne()->name() + " " + std::to_string(sizeof(Ptr<Occurrence>)) + " " + pointerStr;
	}

	return stringifiedJoints;
}

void Exporter::exportExample()
{
	BXDA::Mesh mesh = BXDA::Mesh(Guid());
	BXDA::SubMesh subMesh = BXDA::SubMesh();

	// Face
	std::vector<BXDA::Vertex> vertices;
	vertices.push_back(BXDA::Vertex(Vector3<>(1, 2, 3), Vector3<>(1, 0, 0)));
	vertices.push_back(BXDA::Vertex(Vector3<>(4, 5, 6), Vector3<>(1, 0, 0)));
	vertices.push_back(BXDA::Vertex(Vector3<>(7, 8, 9), Vector3<>(1, 0, 0)));
	
	subMesh.addVertices(vertices);

	// Surface
	BXDA::Surface surface;
	std::vector<BXDA::Triangle> triangles;
	triangles.push_back(BXDA::Triangle(0, 1, 2));
	surface.addTriangles(triangles);

	subMesh.addSurface(surface);
	mesh.addSubMesh(subMesh);

	//Generates timestamp and attaches to file name
	std::string filename = Filesystem::getCurrentRobotDirectory() + "exampleFusion.bxda";
	BXDA::BinaryWriter binary(filename);
	binary.write(mesh);
}

void Exporter::exportExampleXml()
{
	std::string filename = Filesystem::getCurrentRobotDirectory() + "exampleFusionXml.bxdj";
	BXDJ::XmlWriter xml(filename, false);
	xml.startElement("BXDJ");
	xml.writeAttribute("Version", "3.0.0");
	xml.startElement("Node");
	xml.writeAttribute("GUID", "0ba8e1ce-1004-4523-b844-9bfa69efada9");
	xml.writeElement("ParentID", "-1");
	xml.writeElement("ModelFileName", "node_0.bxda");
	xml.writeElement("ModelID", "Part2:1");
}

void Exporter::exportMeshes()
{
	Ptr<UserInterface> userInterface = fusionApplication->userInterface();
	Ptr<FusionDocument> document = fusionApplication->activeDocument();
	
	Guid::resetAutomaticSeed();
	BXDJ::RigidNode rootNode(document->design()->rootComponent(), BXDJ::ConfigData());

	std::string filename = Filesystem::getCurrentRobotDirectory() + "skeleton.bxdj";
	BXDJ::XmlWriter xml(filename, false);
	xml.startElement("BXDJ");
	xml.writeAttribute("Version", "3.0.0");
	xml.write(rootNode);
	xml.endElement();
}
