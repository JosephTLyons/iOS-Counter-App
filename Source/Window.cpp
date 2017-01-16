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

    addAndMakeVisible (incrementButton = new TextButton ("incrementButton"));
    incrementButton->setButtonText (TRANS("Increment"));
    incrementButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    incrementButton->addListener (this);

    addAndMakeVisible (decrementButton = new TextButton ("decrementButton"));
    decrementButton->setButtonText (TRANS("Decrement"));
    decrementButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    decrementButton->addListener (this);

    addAndMakeVisible (numberEditor = new TextEditor ("numberEditor"));
    numberEditor->setMultiLine (false);
    numberEditor->setReturnKeyStartsNewLine (false);
    numberEditor->setReadOnly (false);
    numberEditor->setScrollbarsShown (true);
    numberEditor->setCaretVisible (true);
    numberEditor->setPopupMenuEnabled (true);
    numberEditor->setText (String());

    addAndMakeVisible (zeroOutButton = new TextButton ("zeroOutButton"));
    zeroOutButton->setButtonText (TRANS("Zero"));
    zeroOutButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight);
    zeroOutButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (300, 300);


    //[Constructor] You can add your own custom stuff here..

    Counter counterObject;

    // make sure to display first value of 0
    numberEditor->setText(counterObject.getNumberHolderString());


    //[/Constructor]
}

Window::~Window()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    incrementButton = nullptr;
    decrementButton = nullptr;
    numberEditor = nullptr;
    zeroOutButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Window::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff1b1515));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Window::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    incrementButton->setBounds (184, 208, 104, 24);
    decrementButton->setBounds (32, 208, 104, 24);
    numberEditor->setBounds (80, 88, 150, 24);
    zeroOutButton->setBounds (104, 256, 104, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Window::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == incrementButton)
    {
        //[UserButtonCode_increment] -- add your button handler code here..

        // increment number
        counterObject.incrementNumber();

        //[/UserButtonCode_increment]
    }
    else if (buttonThatWasClicked == decrementButton)
    {
        //[UserButtonCode_decrement] -- add your button handler code here..

        // only decrement until we reach zero
        if (counterObject.getIntNumber() > 0)
        {
            // decrement number
            counterObject.decrementNumber();
        }

        //[/UserButtonCode_decrement]
    }
    else if (buttonThatWasClicked == zeroOutButton)
    {
        //[UserButtonCode_zeroOutButton] -- add your button handler code here..
        
        counterObject.resetNumber();
        
        //[/UserButtonCode_zeroOutButton]
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
  <BACKGROUND backgroundColour="ff1b1515"/>
  <TEXTBUTTON name="incrementButton" id="bd0d25d3a4cfb640" memberName="incrementButton"
              virtualName="" explicitFocusOrder="0" pos="184 208 104 24" buttonText="Increment"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="decrementButton" id="24e1ee09b69994c4" memberName="decrementButton"
              virtualName="" explicitFocusOrder="0" pos="32 208 104 24" buttonText="Decrement"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="numberEditor" id="a92dfa8937177359" memberName="numberEditor"
              virtualName="" explicitFocusOrder="0" pos="80 88 150 24" initialText=""
              multiline="0" retKeyStartsLine="0" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="zeroOutButton" id="4813e0faebc7e1d" memberName="zeroOutButton"
              virtualName="" explicitFocusOrder="0" pos="104 256 104 24" buttonText="Zero"
              connectedEdges="3" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
