#pragma once

#include <juce_gui_basics/juce_gui_basics.h>
#include "PluginProcessor.h"

class DoomFXAudioProcessorEditor : public juce::AudioProcessorEditor {
public:
    explicit DoomFXAudioProcessorEditor(DoomFXAudioProcessor&);
    ~DoomFXAudioProcessorEditor() override = default;

    void paint(juce::Graphics&) override;
    void resized() override;

private:
    DoomFXAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(DoomFXAudioProcessorEditor)
}; 