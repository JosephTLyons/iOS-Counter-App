/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_63ED6B1A580F2A40__
#define __JUCE_HEADER_63ED6B1A580F2A40__

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "Counter.hpp"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Window  : public Component,
                public ButtonListener
{
public:
    //==============================================================================
    Window ();
    ~Window();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;

    // Binary resources:
    static const char* counterNotes_rtf;
    static const int counterNotes_rtfSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.

    Counter counterObject;
    Font fontForDotEditor;
    Font fontForNumberEditor;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> increment1Button;
    ScopedPointer<TextButton> decrementButton;
    ScopedPointer<TextEditor> oneDigitEditor;
    ScopedPointer<TextButton> zeroOutButton;
    ScopedPointer<TextButton> increment10000Button;
    ScopedPointer<TextButton> increment10Button;
    ScopedPointer<TextEditor> twoDigitEditor;
    ScopedPointer<TextEditor> threeDigitEditor;
    ScopedPointer<TextEditor> fourDigitEditor;
    ScopedPointer<TextEditor> fiveDigitEditor;
    ScopedPointer<TextEditor> sixDigitEditor;
    ScopedPointer<TextButton> increment100Button;
    ScopedPointer<TextButton> increment1000Button;
    ScopedPointer<TextEditor> numberFormatEditor;
    ScopedPointer<TextEditor> statusBarBackdrop;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Window)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_63ED6B1A580F2A40__
