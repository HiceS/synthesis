#include "Exporter.h"

using namespace Synthesis;

Exporter::Exporter(Ptr<Application> app) : _app(app) {
	_ui = _app->userInterface();
	//outFile = spdlog::stdout_color_mt("console");
}

Exporter::~Exporter() {
	
}

int Exporter::exportCommon() {
	Ptr<FusionDocument> doc = _app->activeDocument();

	string a = "";

	for (Ptr<Component> comp : doc->design()->allComponents()) {
		a += "name : " + comp->name() + "\n";
		a += "Total bodies in component : " + (int)comp->bRepBodies()->count();
		for (Ptr<BRepBody> m_bod : comp->bRepBodies()) {
			a += "\t";
			Ptr<TriangleMesh> mesh = m_bod->meshManager()->createMeshCalculator()->calculate();
			a += "Mesh index : " + mesh->nodeCount();
			/*a += "Volume : " + m_bod->physicalProperties()->volume;
			a += "Material : " + m_bod->physicalProperties.material;
			a += "Mass : " + m_bod->physicalProperties()->mass;*/
		}

		a += "\n";
	}

	//_ui->messageBox(a);
	//writeToFile(a, info);

	return 0;
}


int Exporter::exportWheel() {
	if (!_ui)
		return 1;


	Ptr<FusionDocument> doc = _app->activeDocument();

	string a = "";


	for (Ptr<Component> comp : doc->design()->allComponents()) {
		a += "Component : " + comp->name() + "\n";
		for (Ptr<Joint> j : comp->joints()) {
			a += j->name() + " ";
		}
		a += "\n";
	}

	_ui->messageBox(a);

	return 0;
}

void Exporter::writeToFile(string a, logLevels lvl) {

	switch (lvl)
	{
	case Synthesis::info:
		//console->info(a);
		break;
	case Synthesis::warn:
		//console->warn(a);
		break;
	case Synthesis::critikal:
		//console->critical(a);
		break;
	default:
		//console->info(a);
		break;
	}
}

/*
Ptr<CommandDefinition> Exporter::expCommand() {
	//Ptr<>
}
 */
