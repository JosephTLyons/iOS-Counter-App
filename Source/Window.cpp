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
    increment1Button->setColour (TextButton::buttonColourId, Colour (0xff27be6b));

    addAndMakeVisible (decrementButton = new TextButton ("decrementButton"));
    decrementButton->setButtonText (TRANS("Decrement"));
    decrementButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    decrementButton->addListener (this);
    decrementButton->setColour (TextButton::buttonColourId, Colours::yellow);

    addAndMakeVisible (numberEditor = new TextEditor ("numberEditor"));
    numberEditor->setMultiLine (false);
    numberEditor->setReturnKeyStartsNewLine (false);
    numberEditor->setReadOnly (true);
    numberEditor->setScrollbarsShown (true);
    numberEditor->setCaretVisible (false);
    numberEditor->setPopupMenuEnabled (true);
    numberEditor->setColour (TextEditor::textColourId, Colours::white);
    numberEditor->setColour (TextEditor::backgroundColourId, Colour (0xff292424));
    numberEditor->setText (String());

    addAndMakeVisible (zeroOutButton = new TextButton ("zeroOutButton"));
    zeroOutButton->setButtonText (TRANS("Zero"));
    zeroOutButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    zeroOutButton->addListener (this);
    zeroOutButton->setColour (TextButton::buttonColourId, Colours::yellow);

    addAndMakeVisible (increment5Button = new TextButton ("increment5Button"));
    increment5Button->setButtonText (TRANS("+5"));
    increment5Button->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    increment5Button->addListener (this);
    increment5Button->setColour (TextButton::buttonColourId, Colour (0xff27be6b));

    addAndMakeVisible (increment10Button = new TextButton ("increment10Button"));
    increment10Button->setButtonText (TRANS("+10"));
    increment10Button->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    increment10Button->addListener (this);
    increment10Button->setColour (TextButton::buttonColourId, Colour (0xff27be6b));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (320, 568);


    //[Constructor] You can add your own custom stuff here..

    // Make sure to display first value of 0
    numberEditor->setText(counterObject.getNumberHolderString());

    // Set up Font Object
    fontForEditor.setSizeAndStyle(80, bold, 1, 0);

    // Set editor font
    numberEditor->setFont(fontForEditor);

    // Set all increment buttons to register on down click and not up click
    increment1Button->setTriggeredOnMouseDown(true);
    increment5Button->setTriggeredOnMouseDown(true);
    increment10Button->setTriggeredOnMouseDown(true);

    //[/Constructor]
}

Window::~Window()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    increment1Button = nullptr;
    decrementButton = nullptr;
    numberEditor = nullptr;
    zeroOutButton = nullptr;
    increment5Button = nullptr;
    increment10Button = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Window::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff292424));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Window::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    increment1Button->setBounds (140, 388, 180, 180);
    decrementButton->setBounds (0, 448, 140, 60);
    numberEditor->setBounds (0, 90, 320, 208);
    zeroOutButton->setBounds (0, 508, 140, 60);
    increment5Button->setBounds (0, 388, 70, 60);
    increment10Button->setBounds (70, 388, 70, 60);
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
        if(counterObject.getIntNumber() > 0)
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
    else if (buttonThatWasClicked == increment5Button)
    {
        //[UserButtonCode_increment5Button] -- add your button handler code here..

        counterObject.incrementNumber(5);

        //[/UserButtonCode_increment5Button]
    }
    else if (buttonThatWasClicked == increment10Button)
    {
        //[UserButtonCode_increment10Button] -- add your button handler code here..

        counterObject.incrementNumber(10);

        //[/UserButtonCode_increment10Button]
    }

    //[UserbuttonClicked_Post]

    // Display updated number
    numberEditor->setText(counterObject.getNumberHolderString());

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
  <BACKGROUND backgroundColour="ff292424"/>
  <TEXTBUTTON name="increment1Button" id="bd0d25d3a4cfb640" memberName="increment1Button"
              virtualName="" explicitFocusOrder="0" pos="140 388 180 180" bgColOff="ff27be6b"
              buttonText="+1" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="decrementButton" id="24e1ee09b69994c4" memberName="decrementButton"
              virtualName="" explicitFocusOrder="0" pos="0 448 140 60" bgColOff="ffffff00"
              buttonText="Decrement" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="numberEditor" id="a92dfa8937177359" memberName="numberEditor"
              virtualName="" explicitFocusOrder="0" pos="0 90 320 208" textcol="ffffffff"
              bkgcol="ff292424" initialText="" multiline="0" retKeyStartsLine="0"
              readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTBUTTON name="zeroOutButton" id="4813e0faebc7e1d" memberName="zeroOutButton"
              virtualName="" explicitFocusOrder="0" pos="0 508 140 60" bgColOff="ffffff00"
              buttonText="Zero" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="increment5Button" id="91e4ed1b33d9dd11" memberName="increment5Button"
              virtualName="" explicitFocusOrder="0" pos="0 388 70 60" bgColOff="ff27be6b"
              buttonText="+5" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="increment10Button" id="cb1330da132e9560" memberName="increment10Button"
              virtualName="" explicitFocusOrder="0" pos="70 388 70 60" bgColOff="ff27be6b"
              buttonText="+10" connectedEdges="3" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
