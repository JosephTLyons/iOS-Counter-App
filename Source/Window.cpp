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

//[Headers] You can add your own extra header files here...
#include "Counter.hpp"
//[/Headers]

#include "Window.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Window::Window ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (increment1Button = new TextButton ("increment1Button"));
    increment1Button->setButtonText (TRANS("+1"));
    increment1Button->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    increment1Button->addListener (this);
    increment1Button->setColour (TextButton::buttonColourId, Colour (0xff9027be));

    addAndMakeVisible (decrementButton = new TextButton ("decrementButton"));
    decrementButton->setButtonText (TRANS("-1"));
    decrementButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    decrementButton->addListener (this);
    decrementButton->setColour (TextButton::buttonColourId, Colour (0xff00ffeb));

    addAndMakeVisible (oneDigitEditor = new TextEditor ("oneDigitEditor"));
    oneDigitEditor->setMultiLine (true);
    oneDigitEditor->setReturnKeyStartsNewLine (true);
    oneDigitEditor->setReadOnly (true);
    oneDigitEditor->setScrollbarsShown (true);
    oneDigitEditor->setCaretVisible (false);
    oneDigitEditor->setPopupMenuEnabled (true);
    oneDigitEditor->setColour (TextEditor::textColourId, Colour (0xffe90808));
    oneDigitEditor->setColour (TextEditor::backgroundColourId, Colours::black);
    oneDigitEditor->setText (String());

    addAndMakeVisible (zeroOutButton = new TextButton ("zeroOutButton"));
    zeroOutButton->setButtonText (TRANS("Zero"));
    zeroOutButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    zeroOutButton->addListener (this);
    zeroOutButton->setColour (TextButton::buttonColourId, Colour (0xff00ffeb));

    addAndMakeVisible (increment10000Button = new TextButton ("increment10000Button"));
    increment10000Button->setButtonText (TRANS("+10000"));
    increment10000Button->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    increment10000Button->addListener (this);
    increment10000Button->setColour (TextButton::buttonColourId, Colour (0xff9027be));

    addAndMakeVisible (increment10Button = new TextButton ("increment10Button"));
    increment10Button->setButtonText (TRANS("+10"));
    increment10Button->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    increment10Button->addListener (this);
    increment10Button->setColour (TextButton::buttonColourId, Colour (0xff9027be));

    addAndMakeVisible (twoDigitEditor = new TextEditor ("twoDigitEditor"));
    twoDigitEditor->setMultiLine (true);
    twoDigitEditor->setReturnKeyStartsNewLine (true);
    twoDigitEditor->setReadOnly (true);
    twoDigitEditor->setScrollbarsShown (true);
    twoDigitEditor->setCaretVisible (false);
    twoDigitEditor->setPopupMenuEnabled (true);
    twoDigitEditor->setColour (TextEditor::textColourId, Colour (0xffffdd5b));
    twoDigitEditor->setColour (TextEditor::backgroundColourId, Colours::black);
    twoDigitEditor->setText (String());

    addAndMakeVisible (threeDigitEditor = new TextEditor ("threeDigitEditor"));
    threeDigitEditor->setMultiLine (true);
    threeDigitEditor->setReturnKeyStartsNewLine (true);
    threeDigitEditor->setReadOnly (true);
    threeDigitEditor->setScrollbarsShown (true);
    threeDigitEditor->setCaretVisible (false);
    threeDigitEditor->setPopupMenuEnabled (true);
    threeDigitEditor->setColour (TextEditor::textColourId, Colour (0xffd4a6ff));
    threeDigitEditor->setColour (TextEditor::backgroundColourId, Colours::black);
    threeDigitEditor->setText (String());

    addAndMakeVisible (fourDigitEditor = new TextEditor ("fourDigitEditor"));
    fourDigitEditor->setMultiLine (true);
    fourDigitEditor->setReturnKeyStartsNewLine (true);
    fourDigitEditor->setReadOnly (true);
    fourDigitEditor->setScrollbarsShown (true);
    fourDigitEditor->setCaretVisible (false);
    fourDigitEditor->setPopupMenuEnabled (true);
    fourDigitEditor->setColour (TextEditor::textColourId, Colour (0xffff43d7));
    fourDigitEditor->setColour (TextEditor::backgroundColourId, Colours::black);
    fourDigitEditor->setText (String());

    addAndMakeVisible (fiveDigitEditor = new TextEditor ("fiveDigitEditor"));
    fiveDigitEditor->setMultiLine (true);
    fiveDigitEditor->setReturnKeyStartsNewLine (true);
    fiveDigitEditor->setReadOnly (true);
    fiveDigitEditor->setScrollbarsShown (true);
    fiveDigitEditor->setCaretVisible (false);
    fiveDigitEditor->setPopupMenuEnabled (true);
    fiveDigitEditor->setColour (TextEditor::textColourId, Colour (0xffa7ff4f));
    fiveDigitEditor->setColour (TextEditor::backgroundColourId, Colours::black);
    fiveDigitEditor->setText (String());

    addAndMakeVisible (sixDigitEditor = new TextEditor ("sixDigitEditor"));
    sixDigitEditor->setMultiLine (true);
    sixDigitEditor->setReturnKeyStartsNewLine (true);
    sixDigitEditor->setReadOnly (true);
    sixDigitEditor->setScrollbarsShown (true);
    sixDigitEditor->setCaretVisible (false);
    sixDigitEditor->setPopupMenuEnabled (true);
    sixDigitEditor->setColour (TextEditor::textColourId, Colours::aqua);
    sixDigitEditor->setColour (TextEditor::backgroundColourId, Colours::black);
    sixDigitEditor->setText (String());

    addAndMakeVisible (increment100Button = new TextButton ("increment100Button"));
    increment100Button->setButtonText (TRANS("+100"));
    increment100Button->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    increment100Button->addListener (this);
    increment100Button->setColour (TextButton::buttonColourId, Colour (0xff9027be));

    addAndMakeVisible (increment1000Button = new TextButton ("increment1000Button"));
    increment1000Button->setButtonText (TRANS("+1000"));
    increment1000Button->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    increment1000Button->addListener (this);
    increment1000Button->setColour (TextButton::buttonColourId, Colour (0xff9027be));

    addAndMakeVisible (numberFormatEditor = new TextEditor ("numberFormatEditor"));
    numberFormatEditor->setMultiLine (false);
    numberFormatEditor->setReturnKeyStartsNewLine (false);
    numberFormatEditor->setReadOnly (true);
    numberFormatEditor->setScrollbarsShown (true);
    numberFormatEditor->setCaretVisible (false);
    numberFormatEditor->setPopupMenuEnabled (true);
    numberFormatEditor->setColour (TextEditor::textColourId, Colours::white);
    numberFormatEditor->setColour (TextEditor::backgroundColourId, Colours::black);
    numberFormatEditor->setText (String());

    addAndMakeVisible (statusBarBackdrop = new TextEditor ("statusBarBackdrop"));
    statusBarBackdrop->setMultiLine (false);
    statusBarBackdrop->setReturnKeyStartsNewLine (false);
    statusBarBackdrop->setReadOnly (true);
    statusBarBackdrop->setScrollbarsShown (false);
    statusBarBackdrop->setCaretVisible (false);
    statusBarBackdrop->setPopupMenuEnabled (false);
    statusBarBackdrop->setColour (TextEditor::backgroundColourId, Colours::white);
    statusBarBackdrop->setText (String());


    //[UserPreSize]
    //[/UserPreSize]

    setSize (320, 568);


    //[Constructor] You can add your own custom stuff here..

    // Set up Font Objects
    fontForDotEditor.setSizeAndStyle(50, bold, 1, 0);
    fontForNumberEditor.setSizeAndStyle(12, normal, 1, 0);

    // Set dot textEditor font
    oneDigitEditor->setFont(fontForDotEditor);
    twoDigitEditor->setFont(fontForDotEditor);
    threeDigitEditor->setFont(fontForDotEditor);
    fourDigitEditor->setFont(fontForDotEditor);
    fiveDigitEditor->setFont(fontForDotEditor);
    sixDigitEditor->setFont(fontForDotEditor);

    // Set number textEditor font
    numberFormatEditor->setFont(fontForNumberEditor);

    // Set all increment buttons to register on down click and not up click
    increment1Button->setTriggeredOnMouseDown(true);
    increment10Button->setTriggeredOnMouseDown(true);
    increment100Button->setTriggeredOnMouseDown(true);
    increment1000Button->setTriggeredOnMouseDown(true);
    increment10000Button->setTriggeredOnMouseDown(true);

    decrementButton->setTriggeredOnMouseDown(true);
    zeroOutButton->setTriggeredOnMouseDown(true);

    // Set Number Editor to total tap count (currently 0)
    numberFormatEditor->setText((String) counterObject.getTotalTapCount());

    //[/Constructor]
}

Window::~Window()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    increment1Button = nullptr;
    decrementButton = nullptr;
    oneDigitEditor = nullptr;
    zeroOutButton = nullptr;
    increment10000Button = nullptr;
    increment10Button = nullptr;
    twoDigitEditor = nullptr;
    threeDigitEditor = nullptr;
    fourDigitEditor = nullptr;
    fiveDigitEditor = nullptr;
    sixDigitEditor = nullptr;
    increment100Button = nullptr;
    increment1000Button = nullptr;
    numberFormatEditor = nullptr;
    statusBarBackdrop = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Window::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffc3a0a0));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Window::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    increment1Button->setBounds (140, 388, 180, 180);
    decrementButton->setBounds (70, 508, 70, 60);
    oneDigitEditor->setBounds (160, 259, 160, 129);
    zeroOutButton->setBounds (0, 508, 70, 60);
    increment10000Button->setBounds (0, 388, 70, 60);
    increment10Button->setBounds (70, 448, 70, 60);
    twoDigitEditor->setBounds (0, 259, 160, 129);
    threeDigitEditor->setBounds (160, 130, 160, 129);
    fourDigitEditor->setBounds (0, 130, 160, 129);
    fiveDigitEditor->setBounds (160, 1, 160, 129);
    sixDigitEditor->setBounds (0, 1, 160, 129);
    increment100Button->setBounds (0, 448, 70, 60);
    increment1000Button->setBounds (70, 388, 70, 60);
    numberFormatEditor->setBounds (0, 364, 320, 24);
    statusBarBackdrop->setBounds (0, 0, 320, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Window::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == increment1Button)
    {
        //[UserButtonCode_increment1Button] -- add your button handler code here..

        counterObject.incrementNumber(1);

        //[/UserButtonCode_increment1Button]
    }
    else if (buttonThatWasClicked == decrementButton)
    {
        //[UserButtonCode_decrementButton] -- add your button handler code here..

        // only decrement until we hit zero, then stop
        if(counterObject.getTotalTapCount() > 0)
        {
            counterObject.decrementNumber();
        }

        //[/UserButtonCode_decrementButton]
    }
    else if (buttonThatWasClicked == zeroOutButton)
    {
        //[UserButtonCode_zeroOutButton] -- add your button handler code here..

        counterObject.resetNumberToZero();

        //[/UserButtonCode_zeroOutButton]
    }
    else if (buttonThatWasClicked == increment10000Button)
    {
        //[UserButtonCode_increment10000Button] -- add your button handler code here..
        
        counterObject.incrementNumber(10000);
        
        //[/UserButtonCode_increment10000Button]
    }
    else if (buttonThatWasClicked == increment10Button)
    {
        //[UserButtonCode_increment10Button] -- add your button handler code here..

        counterObject.incrementNumber(10);

        //[/UserButtonCode_increment10Button]
    }
    else if (buttonThatWasClicked == increment100Button)
    {
        //[UserButtonCode_increment100Button] -- add your button handler code here..

        counterObject.incrementNumber(100);

        //[/UserButtonCode_increment100Button]
    }
    else if (buttonThatWasClicked == increment1000Button)
    {
        //[UserButtonCode_increment1000Button] -- add your button handler code here..

        counterObject.incrementNumber(1000);

        //[/UserButtonCode_increment1000Button]
    }

    //[UserbuttonClicked_Post]
    
    // Always re-populate the strings no matter what button is clicked
    counterObject.populateDotStrings();

    // Display updated dot count to textEditor fields
    oneDigitEditor->setText(counterObject.returnDigitsString(1));
    twoDigitEditor->setText(counterObject.returnDigitsString(2));
    threeDigitEditor->setText(counterObject.returnDigitsString(3));
    fourDigitEditor->setText(counterObject.returnDigitsString(4));
    fiveDigitEditor->setText(counterObject.returnDigitsString(5));
    sixDigitEditor->setText(counterObject.returnDigitsString(6));

    // Display updated number
    numberFormatEditor->setText((String) counterObject.getTotalTapCount());

    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Window" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="320" initialHeight="568">
  <BACKGROUND backgroundColour="ffc3a0a0"/>
  <TEXTBUTTON name="increment1Button" id="bd0d25d3a4cfb640" memberName="increment1Button"
              virtualName="" explicitFocusOrder="0" pos="140 388 180 180" bgColOff="ff9027be"
              buttonText="+1" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="decrementButton" id="24e1ee09b69994c4" memberName="decrementButton"
              virtualName="" explicitFocusOrder="0" pos="70 508 70 60" bgColOff="ff00ffeb"
              buttonText="-1" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="oneDigitEditor" id="a92dfa8937177359" memberName="oneDigitEditor"
              virtualName="" explicitFocusOrder="0" pos="160 259 160 129" textcol="ffe90808"
              bkgcol="ff000000" initialText="" multiline="1" retKeyStartsLine="1"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTBUTTON name="zeroOutButton" id="4813e0faebc7e1d" memberName="zeroOutButton"
              virtualName="" explicitFocusOrder="0" pos="0 508 70 60" bgColOff="ff00ffeb"
              buttonText="Zero" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="increment10000Button" id="91e4ed1b33d9dd11" memberName="increment10000Button"
              virtualName="" explicitFocusOrder="0" pos="0 388 70 60" bgColOff="ff9027be"
              buttonText="+10000" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="increment10Button" id="cb1330da132e9560" memberName="increment10Button"
              virtualName="" explicitFocusOrder="0" pos="70 448 70 60" bgColOff="ff9027be"
              buttonText="+10" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="twoDigitEditor" id="307ebba97abe27fc" memberName="twoDigitEditor"
              virtualName="" explicitFocusOrder="0" pos="0 259 160 129" textcol="ffffdd5b"
              bkgcol="ff000000" initialText="" multiline="1" retKeyStartsLine="1"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="threeDigitEditor" id="cc880f56d37202bd" memberName="threeDigitEditor"
              virtualName="" explicitFocusOrder="0" pos="160 130 160 129" textcol="ffd4a6ff"
              bkgcol="ff000000" initialText="" multiline="1" retKeyStartsLine="1"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="fourDigitEditor" id="2fe1eda1425062e0" memberName="fourDigitEditor"
              virtualName="" explicitFocusOrder="0" pos="0 130 160 129" textcol="ffff43d7"
              bkgcol="ff000000" initialText="" multiline="1" retKeyStartsLine="1"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="fiveDigitEditor" id="225501241d10fe7d" memberName="fiveDigitEditor"
              virtualName="" explicitFocusOrder="0" pos="160 1 160 129" textcol="ffa7ff4f"
              bkgcol="ff000000" initialText="" multiline="1" retKeyStartsLine="1"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="sixDigitEditor" id="4fc102723a1ac86" memberName="sixDigitEditor"
              virtualName="" explicitFocusOrder="0" pos="0 1 160 129" textcol="ff00ffff"
              bkgcol="ff000000" initialText="" multiline="1" retKeyStartsLine="1"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTBUTTON name="increment100Button" id="6b79c890d1b60cf8" memberName="increment100Button"
              virtualName="" explicitFocusOrder="0" pos="0 448 70 60" bgColOff="ff9027be"
              buttonText="+100" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="increment1000Button" id="68df2984869f2126" memberName="increment1000Button"
              virtualName="" explicitFocusOrder="0" pos="70 388 70 60" bgColOff="ff9027be"
              buttonText="+1000" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="numberFormatEditor" id="a227d58174688499" memberName="numberFormatEditor"
              virtualName="" explicitFocusOrder="0" pos="0 364 320 24" textcol="ffffffff"
              bkgcol="ff000000" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTEDITOR name="statusBarBackdrop" id="4dd1f707ed9481e2" memberName="statusBarBackdrop"
              virtualName="" explicitFocusOrder="0" pos="0 0 320 24" bkgcol="ffffffff"
              initialText="" multiline="0" retKeyStartsLine="0" readonly="1"
              scrollbars="0" caret="0" popupmenu="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: counterNotes_rtf, 554, "Counter Notes.rtf"
static const unsigned char resource_Window_counterNotes_rtf[] = { 123,92,114,116,102,49,92,97,110,115,105,92,97,110,115,105,99,112,103,49,50,53,50,92,99,111,99,111,97,114,116,102,49,53,48,52,92,99,111,
99,111,97,115,117,98,114,116,102,56,49,48,10,123,92,102,111,110,116,116,98,108,92,102,48,92,102,115,119,105,115,115,92,102,99,104,97,114,115,101,116,48,32,72,101,108,118,101,116,105,99,97,59,125,10,123,
92,99,111,108,111,114,116,98,108,59,92,114,101,100,50,53,53,92,103,114,101,101,110,50,53,53,92,98,108,117,101,50,53,53,59,125,10,123,92,42,92,101,120,112,97,110,100,101,100,99,111,108,111,114,116,98,108,
59,59,125,10,92,109,97,114,103,108,49,52,52,48,92,109,97,114,103,114,49,52,52,48,92,118,105,101,119,119,49,48,56,48,48,92,118,105,101,119,104,56,52,48,48,92,118,105,101,119,107,105,110,100,48,10,92,112,
97,114,100,92,116,120,55,50,48,92,116,120,49,52,52,48,92,116,120,50,49,54,48,92,116,120,50,56,56,48,92,116,120,51,54,48,48,92,116,120,52,51,50,48,92,116,120,53,48,52,48,92,116,120,53,55,54,48,92,116,120,
54,52,56,48,92,116,120,55,50,48,48,92,116,120,55,57,50,48,92,116,120,56,54,52,48,92,112,97,114,100,105,114,110,97,116,117,114,97,108,92,112,97,114,116,105,103,104,116,101,110,102,97,99,116,111,114,48,
10,10,92,102,48,92,102,115,50,52,32,92,99,102,48,32,49,41,32,65,100,106,117,115,116,32,97,108,108,32,99,111,108,111,114,115,32,45,32,100,111,116,115,32,97,108,108,32,110,101,111,110,44,32,102,105,103,
117,114,101,32,115,111,109,101,116,104,105,110,103,32,111,117,116,32,102,111,114,32,98,117,116,116,111,110,115,92,10,50,41,32,69,118,101,110,108,121,32,83,112,97,99,101,32,100,111,116,32,102,105,101,108,
100,115,32,111,110,32,114,105,103,104,116,32,97,110,100,32,108,101,102,116,32,115,105,100,101,115,32,111,102,32,100,101,118,105,99,101,92,10,51,41,32,83,116,97,116,117,115,32,66,97,114,63,92,10,52,41,
32,84,105,116,108,101,63,92,10,53,41,32,82,111,117,110,100,32,100,111,116,115,44,32,117,115,101,32,97,32,100,105,102,102,101,114,101,110,116,32,102,111,110,116,63,92,10,54,41,32,65,112,112,73,99,111,110,
125,0,0};

const char* Window::counterNotes_rtf = (const char*) resource_Window_counterNotes_rtf;
const int Window::counterNotes_rtfSize = 554;


//[EndFile] You can add extra defines here...
//[/EndFile]
