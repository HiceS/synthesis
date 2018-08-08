#pragma once

#include <Fusion/Fusion/FusionDocument.h>
#include <functional>
#include "Data/BXDJ/ConfigData.h"

using namespace adsk::core;
using namespace adsk::fusion;

namespace Synthesis
{
	class Exporter
	{
	public:
		static std::vector<Ptr<Joint>> collectJoints(Ptr<FusionDocument>);
		static BXDJ::ConfigData loadConfiguration(Ptr<FusionDocument> document);
		static void saveConfiguration(BXDJ::ConfigData config, Ptr<FusionDocument> document);

		static void exportExample();
		static void exportExampleXml();
		static void exportMeshes(BXDJ::ConfigData, Ptr<FusionDocument>, std::function<void(double)> progressCallback = nullptr, bool * cancel = nullptr);

	};
}
