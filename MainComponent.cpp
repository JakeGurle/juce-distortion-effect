
#include "MainComponent.h"
#include "JuceHeader.h"


MainComponent::MainComponent() {
	//: valueTreeState(){
	/*
	Program wants inheretence from an AudioProcessor, which doesn't apply to this class.
	*/
	setSize(800, 600);

	setAudioChannels(2, 2);

	addAndMakeVisible(DriveLabel);
	addAndMakeVisible(&Drive);

	addAndMakeVisible(&VolLabel);
	addAndMakeVisible(&Volume);

	addAndMakeVisible(&GainLabel);
	addAndMakeVisible(&Gain);

	addAndMakeVisible(&RangeLabel);
	addAndMakeVisible(&Range);


	gainAttachment.reset(new SliderAttachment(valueTreeState, "gain", Gain));

}

MainComponent::~MainComponent()
{
	shutdownAudio();
}

void MainComponent::prepareToPlay(int samplesPerBlockExpected, double sampleRate)
{
}

void MainComponent::getNextAudioBlock(const AudioSourceChannelInfo& bufferToFill)
{
}

void MainComponent::releaseResources()
{
}

void MainComponent::paint(Graphics& g)
{
}


void MainComponent::resized()
{
	int sliderleft = 120;
	//Because auto is for pansies.
	juce::Rectangle<int> r = getLocalBounds();
}