//
//  Counter.cpp
//  iPhone Counter
//
//  Created by Joseph Lyons on 1/14/17.
//
//

#include "Counter.hpp"
#include "../JuceLibraryCode/JuceHeader.h"

Counter::Counter()
{
    counterNumber = 0;
    setIntToStringValue();
}

void Counter::incrementNumber(const int &input)
{
    counterNumber += input;
    setIntToStringValue();
}

void Counter::decrementNumber()
{
    counterNumber--;
    setIntToStringValue();
}

void Counter::resetNumberToZero()
{
    counterNumber = 0;
    setIntToStringValue();
}

void Counter::setIntToStringValue()
{
    numberHolderString = (String) counterNumber;
}

unsigned long int Counter::getIntNumber()
{
    return counterNumber;
}

String Counter::getNumberHolderString()
{
    return numberHolderString;
}
