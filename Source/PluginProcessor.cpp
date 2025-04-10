#include "PluginProcessor.h"
#include "PluginEditor.h"

DoomFXAudioProcessor::DoomFXAudioProcessor()
    : AudioProcessor(BusesProperties()
        .withInput("Input", juce::AudioChannelSet::stereo(), true)
        .withOutput("Output", juce::AudioChannelSet::stereo(), true))
{
    reverbParams.roomSize = 0.7f;
    reverbParams.damping = 0.5f;
    reverbParams.wetLevel = 0.3f;
    reverbParams.dryLevel = 0.6f;
    reverb.setParameters(reverbParams);
}

void DoomFXAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock) {
    juce::ignoreUnused(samplesPerBlock);
    reverb.setSampleRate(sampleRate);
}

void DoomFXAudioProcessor::releaseResources() {}

void DoomFXAudioProcessor::processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer&) {
    juce::ScopedNoDenormals noDenormals;
    for (int channel = 0; channel < getTotalNumOutputChannels(); ++channel) {
        reverb.processMono(buffer.getWritePointer(channel), buffer.getNumSamples());
    }
}

juce::AudioProcessorEditor* DoomFXAudioProcessor::createEditor() {
    return new juce::GenericAudioProcessorEditor(*this);
}

bool DoomFXAudioProcessor::hasEditor() const { return true; }
const juce::String DoomFXAudioProcessor::getName() const { return "DoomFX"; }
bool DoomFXAudioProcessor::acceptsMidi() const { return false; }
bool DoomFXAudioProcessor::producesMidi() const { return false; }
bool DoomFXAudioProcessor::isMidiEffect() const { return false; }
double DoomFXAudioProcessor::getTailLengthSeconds() const { return 1.5; }

int DoomFXAudioProcessor::getNumPrograms() { return 1; }
int DoomFXAudioProcessor::getCurrentProgram() { return 0; }
void DoomFXAudioProcessor::setCurrentProgram(int) {}
const juce::String DoomFXAudioProcessor::getProgramName(int) { return {}; }
void DoomFXAudioProcessor::changeProgramName(int, const juce::String&) {}

void DoomFXAudioProcessor::getStateInformation(juce::MemoryBlock& destData) {}
void DoomFXAudioProcessor::setStateInformation(const void* data, int sizeInBytes) {}
