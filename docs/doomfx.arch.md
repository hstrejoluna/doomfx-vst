# 

# 

# 

# **Architectural Record – DoomFX VST Plugin**

## **Status**

Proposed ✅

## **Context**

DoomFX is a VST3 multi-effects audio plugin designed to produce Doomer-style mixes. The plugin will provide a modular effects chain, analog-inspired signal processing, and a themed UI. It must support cross-platform compatibility, especially for GNU/Linux users, and operate within major DAWs. This architecture will focus on using well-supported plugin development frameworks and maintain separation of concerns for audio processing, UI rendering, and preset/state management.

---

## **Decision**

### **🎯 Core Architecture**

DoomFX will be built using the **JUCE framework**, leveraging its robust VST3 support, modular architecture, and cross-platform build system.

### **📐 Project Structure**

doomfx/  
├── Source/  
│   ├── Main.cpp  
│   ├── PluginProcessor.cpp/.h    \# Audio engine  
│   ├── PluginEditor.cpp/.h       \# UI layer  
│   ├── Modules/  
│   │   ├── ReverbModule.cpp/.h  
│   │   ├── SaturationModule.cpp/.h  
│   │   ├── FilterModule.cpp/.h  
│   │   ├── ChorusModule.cpp/.h  
│   │   ├── EQModule.cpp/.h  
│   │   └── StereoModule.cpp/.h  
│   └── PresetManager.cpp/.h  
├── Resources/  
│   └── UI assets, fonts, illustrations  
├── CMakeLists.txt  
└── README.md

### **⚙️ Audio Signal Flow**

* Internally routed through a `ModularProcessorChain`

* Each module receives and processes audio in sequence

* Chain is dynamically re-orderable by the user

* Uses JUCE's `AudioProcessorGraph` or equivalent

### **🧠 Preset & State Management**

* Presets stored as JSON/XML

* Built-in presets loaded from embedded files

* User presets saved via JUCE `ValueTree`

* Support DAW session recall and plugin state serialization

### **🎨 UI Rendering**

* JUCE `Component`\-based UI with custom LookAndFeel

* Uses embedded SVGs or PNGs for knobs and textures

* Responsive to screen sizes and HiDPI

* Optional viewport scrolling for module chains

---

## **Alternatives Considered**

* **iPlug2**: Simpler but with less community support and tooling for complex UI

* **CLAP format**: Not widely adopted yet for cross-platform compatibility

JUCE was chosen for maturity, ecosystem, and support of VST3 on Linux, macOS, and Windows.

---

## **Consequences**

* Development will require JUCE license for plugin deployment

* Build setup will involve CMake \+ Projucer or direct CMake integration

* Testing must include all three OSes (CI/CD plan pending)

* UI will be asset-heavy; need to optimize load times and textures

---

## **Next Steps**

* Define Epics based on this architecture

* Begin with scaffold of JUCE project and PluginProcessor/Editor stubs

* Implement and test 1 effect module (Reverb) as vertical slice

* Define interface for PresetManager and ModularProcessorChain

---

## **Tags**

`#juce` `#vst3` `#audio` `#plugin` `#architecture` `#doomerfx`

