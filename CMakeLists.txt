cmake_minimum_required(VERSION 3.15)

project(DoomFX VERSION 0.1.0)

# Point to your JUCE submodule folder (assumes JUCE is in doomfx/JUCE)
set(JUCE_DIR JUCE)
add_subdirectory(${JUCE_DIR})

juce_add_plugin(DoomFX
    COMPANY_NAME "HSTREJOLUNA"
    IS_SYNTH FALSE
    NEEDS_MIDI_INPUT FALSE
    NEEDS_MIDI_OUTPUT FALSE
    EDITOR_WANTS_KEYBOARD_FOCUS TRUE
    PLUGIN_MANUFACTURER_CODE Juce
    PLUGIN_CODE DMFX
    FORMATS VST3
    PRODUCT_NAME "DoomFX"
)

target_sources(DoomFX PRIVATE
    Source/Main.cpp
    Source/PluginProcessor.cpp
    Source/PluginEditor.cpp
)

target_compile_definitions(DoomFX PRIVATE
    JUCE_WEB_BROWSER=0
    JUCE_USE_CURL=0
)

target_link_libraries(DoomFX PRIVATE
    juce::juce_audio_utils
    juce::juce_dsp
)
