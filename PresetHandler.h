#ifndef HEADER_PRESETHANDLER
#define HEADER_PRESETHANDLER
#include "JuceHeader.h"
class PresetHandler : public AudioProcessor
{
public:
	PresetHandler();
	~PresetHandler();
	void getStateInfo(MemoryBlock  &destDate);
	void setStateInfo();

private:

	AudioProcessorValueTreeState pluginParameters;
	float previousGain;

	float* gainParameter = nullptr;
	float* driveParameter = nullptr;
	float* rangeParameter = nullptr;
	float* volumeParameter = nullptr;
};

#endif

