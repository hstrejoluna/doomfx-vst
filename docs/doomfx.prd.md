# **Product Requirements Document (PRD)**

## **Product Name**

**DoomFX** – VST3 Plugin for Doomer Mix Effects

---

## **Overview**

**DoomFX** is a VST3 audio plugin designed to help producers craft emotionally immersive "Doomer-style" mixes using a powerful chain of analog-inspired effects. The plugin provides modular control over effects like reverb, saturation, lo-fi filters, and stereo widening. Aesthetically, it draws from post-Soviet grit, 80s analog hardware, and lo-fi urban decay.

This document outlines the MVP requirements to deliver a functional, cross-platform plugin for musicians, sound designers, and hobbyists seeking that nostalgic, melancholic sound.

---

## **Goals**

* Provide a modular, customizable multi-effect plugin optimized for creating Doomer music textures

* Support cross-platform compatibility via VST3, especially GNU/Linux

* Align visual design with retro analog pedals and Doomer subculture

* Deliver an emotionally resonant UI with minimal friction

* Include basic presets for out-of-the-box use

---

## **Target Users**

* Independent music producers

* Lo-fi and ambient musicians

* Sound designers for film/games

* Fans of post-punk, darkwave, synthwave, and vaporwave

---

## **Features**

### **🔗 Modular Effects Chain (Drag & Drop)**

* Chain modules in any order

* Each effect block toggleable on/off

* Signal flow visible via UI connectors

### **🎛️ Core Effects Modules**

* **Reverb**: Analog-style, long-decay, moody

* **Saturation**: Tape warmth, subtle overdrive

* **Lo-fi Filter**: Vinyl crackle, hiss, bitcrush, band-pass

* **Chorus**: Slow, wide stereo modulation

* **EQ**: 3-band, with focus on mid shaping

* **Stereo Widener**: Subtle image expansion with mono safety

### **📦 Presets (MVP Set)**

* "Rainy Walk Alone"

* "VHS Night Drive"

* "Soviet Coldwave"

* "Basement Echoes"

* "Empty Club at 3AM"

### **🧑‍🎨 UI/UX Design (Doomer Aesthetic)**

* Saturated but dark tones: purples, muted pinks, desaturated yellows

* Bold analog knobs with worn textures

* Stylized hand-drawn illustrations (e.g., hawk, lightning, cityscape)

* Comic-inspired typography with retro flair

* Background includes hooded figure under streetlight

* Cracked starburst elements, grungy overlay

### **🖥 Compatibility**

* **Plugin Format**: VST3

* **Framework**: JUCE or iPlug2 recommended

* **OS Support**: Windows, macOS, GNU/Linux

---

## **Non-Goals**

* No MIDI input/output

* No virtual instruments

* No automation control inside plugin (handled by DAW)

* No skin/theme customization for MVP

---

## **Success Criteria**

* Plugin loads in major DAWs on all target platforms

* All effects operate without crashes or audio artifacts

* Presets produce recognizable Doomer textures

* UI is intuitive and emotionally aligned with the target aesthetic

* MVP receives positive feedback from 3–5 target users

---

## **Future Considerations**

* Spectral visualizer with VHS effects

* AI-powered "Doomerize My Track" preset generator

* Plugin skin/theme variants

* Preset sharing via cloud or QR

* Custom impulse response loader for reverb

---

## **Assets / References**

* UI mockups (toonish \+ dark Doomer variant)

* Hawk Phaser-style inspiration

* Molchat Doma, Sovietwave, Blade Runner 2049 atmospheres

---

## **Owner / Stakeholders**

* Product Owner: @you

* Dev/Design: TBD

* Cursor Agile Workflow: Rule-based PRD → Design → Tasks → Implementation

---

**Status:** Ready for approval ✅ **Next Step:** Define Architecture Record (doomfx.arch.md) and break into Epics & Tasks

