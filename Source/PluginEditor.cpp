#include "PluginEditor.h"

DoomFXAudioProcessorEditor::DoomFXAudioProcessorEditor(DoomFXAudioProcessor& p)
    : AudioProcessorEditor(&p), audioProcessor(p) {
    setSize(400, 300);
}

void DoomFXAudioProcessorEditor::paint(juce::Graphics& g) {
    g.fillAll(juce::Colours::black);
    g.setColour(juce::Colours::white);
    g.setFont(16.0f);
    g.drawFittedText("DoomFX Plugin UI", getLocalBounds(), juce::Justification::centred, 1);
}

void DoomFXAudioProcessorEditor::resized() {}
