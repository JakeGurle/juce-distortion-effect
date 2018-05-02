#include "PresetHandler.h"


PresetHandler::PresetHandler() 
: pluginParameters(*this, nullptr){
	pluginParameters.createAndAddParameter("gain", "Gain", String(), NormalisableRange<float> (0.0f, 1.0f), 0.5f, nullptr,nullptr);
	pluginParameters.createAndAddParameter("drive","Drive", String(), NormalisableRange<float>(0.0f, 1.0f, 0.001), 1.0f, nullptr, nullptr);
	pluginParameters.createAndAddParameter("range", "Range", String(), NormalisableRange<float>(0.0f, 30000.0f,0.001),1.0f, nullptr, nullptr);
	pluginParameters.createAndAddParameter("volume", "Volume", String(),NormalisableRange<float>(0.0f, 3.0f,0.001), 1.0f, nullptr, nullptr);

	pluginParameters.state = ValueTree(Identifier("USERPRESET"));
}

PresetHandler::~PresetHandler()
{

}

void PresetHandler::getStateInfo(MemoryBlock & destDate)
{
}

void PresetHandler::setStateInfo()
{

}
