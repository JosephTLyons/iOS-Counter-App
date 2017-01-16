/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.0

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

    addAndMakeVisible (decrementButton = new TextButton ("decrementButton"));
    decrementButton->setButtonText (TRANS("Decrement"));
    decrementButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    decrementButton->addListener (this);

    addAndMakeVisible (numberEditor = new TextEditor ("numberEditor"));
    numberEditor->setMultiLine (false);
    numberEditor->setReturnKeyStartsNewLine (false);
    numberEditor->setReadOnly (true);
    numberEditor->setScrollbarsShown (true);
    numberEditor->setCaretVisible (false);
    numberEditor->setPopupMenuEnabled (true);
    numberEditor->setColour (TextEditor::textColourId, Colour (0xff832f2f));
    numberEditor->setColour (TextEditor::backgroundColourId, Colours::white);
    numberEditor->setText (String());

    addAndMakeVisible (zeroOutButton = new TextButton ("zeroOutButton"));
    zeroOutButton->setButtonText (TRANS("Zero"));
    zeroOutButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    zeroOutButton->addListener (this);

    addAndMakeVisible (increment5Button = new TextButton ("increment5Button"));
    increment5Button->setButtonText (TRANS("+5"));
    increment5Button->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    increment5Button->addListener (this);

    addAndMakeVisible (increment10Button = new TextButton ("increment10Button"));
    increment10Button->setButtonText (TRANS("+10"));
    increment10Button->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    increment10Button->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (300, 300);


    //[Constructor] You can add your own custom stuff here..
    // make sure to display first value of 0
    numberEditor->setText(counterObject.getNumberHolderString());


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

    g.fillAll (Colour (0xff3b3434));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Window::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    increment1Button->setBounds (150, 150, 150, 150);
    decrementButton->setBounds (0, 200, 150, 50);
    numberEditor->setBounds (proportionOfWidth (0.3467f), 88, 100, 24);
    zeroOutButton->setBounds (0, 250, 150, 50);
    increment5Button->setBounds (0, 150, 75, 50);
    increment10Button->setBounds (75, 150, 75, 50);
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
                 fixedSize="1" initialWidth="300" initialHeight="300">
  <BACKGROUND backgroundColour="ff3b3434"/>
  <TEXTBUTTON name="increment1Button" id="bd0d25d3a4cfb640" memberName="increment1Button"
              virtualName="" explicitFocusOrder="0" pos="150 150 150 150" buttonText="+1"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="decrementButton" id="24e1ee09b69994c4" memberName="decrementButton"
              virtualName="" explicitFocusOrder="0" pos="0 200 150 50" buttonText="Decrement"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="numberEditor" id="a92dfa8937177359" memberName="numberEditor"
              virtualName="" explicitFocusOrder="0" pos="34.667% 88 100 24"
              textcol="ff832f2f" bkgcol="ffffffff" initialText="" multiline="0"
              retKeyStartsLine="0" readonly="1" scrollbars="1" caret="0" popupmenu="1"/>
  <TEXTBUTTON name="zeroOutButton" id="4813e0faebc7e1d" memberName="zeroOutButton"
              virtualName="" explicitFocusOrder="0" pos="0 250 150 50" buttonText="Zero"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="increment5Button" id="91e4ed1b33d9dd11" memberName="increment5Button"
              virtualName="" explicitFocusOrder="0" pos="0 150 75 50" buttonText="+5"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="increment10Button" id="cb1330da132e9560" memberName="increment10Button"
              virtualName="" explicitFocusOrder="0" pos="75 150 75 50" buttonText="+10"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
