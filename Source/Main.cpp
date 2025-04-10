#include "PluginProcessor.h"

// This function must be defined to create the actual plugin instance
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new DoomFXAudioProcessor();
}

// This creates the entry points required for an Audio Unit, VST3, Standalone & AAX plugin.
// The appropriate identifiers are provided in the project CMakeLists.txt file.
#include <juce_audio_plugin_client/juce_audio_plugin_client.h>
