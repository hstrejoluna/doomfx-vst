# **Epics – DoomFX VST Plugin**

## **🎛 Epic 1: Audio Engine**

**Goal:** Implement modular signal processing and core audio logic.

### **Stories:**

* **\[AUDIO-01\] Modular Routing Engine**  
  * Create `ModularProcessorChain` using JUCE `AudioProcessorGraph`  
  * Allow dynamic module ordering  
  * Route audio through sequential effect blocks  
* **\[AUDIO-02\] DSP Module Implementations**  
  * Build DSP for Reverb, Saturation, Filter, Chorus, EQ, Stereo  
  * Tune for analog-style sound with Doomer character  
* **\[AUDIO-03\] Performance Optimization**  
  * Profiling for low-latency, real-time playback  
  * Prevent CPU spikes across DAWs

---

## **🎨 Epic 2: UI System**

**Goal:** Design and implement the visual layer with retro-Doomer look.

### **Stories:**

* **\[UI-01\] Doomer UI Skin**  
  * Apply custom LookAndFeel  
  * Layout knobs, controls, illustrations  
  * Responsive design for screen scaling  
* **\[UI-02\] Drag-and-Drop Module Chain**  
  * Visual horizontal chain of effects  
  * Support drag-to-reorder  
  * Reflect real-time routing updates  
* **\[UI-03\] Interactive Knob Controls**  
  * Create stylized knobs with analog feel  
  * Support mouse \+ MIDI CC binding (optional future)

---

## **💾 Epic 3: Preset & State Management**

**Goal:** Enable preset recall, plugin state persistence, and factory defaults.

### **Stories:**

* **\[PRESET-01\] Built-in Preset Loader**  
  * Load 5 MVP presets on launch  
  * Display dropdown list in UI  
* **\[PRESET-02\] User Preset Saving/Loading**  
  * Save plugin state via JUCE `ValueTree`  
  * Integrate with DAW session recall  
* **\[PRESET-03\] Cross-Platform Compatibility**  
  * Validate preset behavior on all OSes

---

## **🖥️ Epic 4: Cross-Platform Support**

**Goal:** Ensure the plugin builds and runs on all supported platforms.

### **Stories:**

* **\[XPLAT-01\] JUCE Setup & Build System**  
  * CMake-based build files for VST3 export  
  * Support Windows, macOS, GNU/Linux  
* **\[XPLAT-02\] CI/CD Pipeline (Optional)**  
  * Set up GitHub Actions / GitLab CI for multi-platform builds  
* **\[XPLAT-03\] DAW Compatibility Testing**  
  * Validate functionality in Ableton, Reaper, FL Studio, Ardour

---

## **🧪 Epic 5: Testing & QA**

**Goal:** Validate audio, UI, and system-level functionality.

### **Stories:**

* **\[QA-01\] Manual Testing Matrix**  
  * Checklist for each module's sound/behavior  
  * DAW-specific tests for host automation and UI scaling  
* **\[QA-02\] Automated DSP Tests**  
  * Unit tests for audio processors  
  * Baseline latency and CPU profiling

---

## **⏭️ Next Steps**

* Start vertical slice: AUDIO-01 \+ UI-01 \+ PRESET-01  
* Open Tasks under these stories using Cursor notepad or rule-based workflow  
* Track PRs and testing gates per epic

---

## **Tags**

`#epics` `#tasks` `#vst3` `#doomerfx` `#cursor-workflow`

