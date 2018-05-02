#include "../JuceLibraryCode/JuceHeader.h"

enum ParameterSize {
	CONTROL_HEIGHT = 40,
	LABEL_WIDTH = 80,
	SLIDER_WIDTH = 300
};
class MainComponent : public AudioAppComponent
{
public:

	MainComponent();
	~MainComponent();


	typedef AudioProcessorValueTreeState::SliderAttachment SliderAttachment;


	void prepareToPlay(int samplesPerBlockExpected, double sampleRate) override;
	void getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill) override;
	void releaseResources() override;


	void paint(Graphics& graphics) override;
	void resized() override;

private:


#pragma region UIObjects

	Slider Drive;
	Slider Volume;
	Slider Gain;
	Slider Range;
#pragma endregion


#pragma region Labels
	Label DriveLabel;
	Label VolLabel;
	Label GainLabel;
	Label RangeLabel;
#pragma endregion


#pragma region Attachments
	std::unique_ptr<SliderAttachment> driveAttachment;
	std::unique_ptr<SliderAttachment> volumeAttachment;
	std::unique_ptr<SliderAttachment> gainAttachment;
	std::unique_ptr<SliderAttachment> rangeAttachment;
#pragma endregion





	AudioProcessorValueTreeState valueTreeState;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MainComponent)
};

