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
    totalTapCount = 0;
    
    oneDigit   = 0;
    twoDigit   = 0;
    threeDigit = 0;
    fourDigit  = 0;
    fiveDigit  = 0;
    sixDigit   = 0;
}

void Counter::incrementNumber(const int &input)
{
    totalTapCount += input;
    
    calculateDots();
}

void Counter::decrementNumber()
{
    totalTapCount--;
    
    calculateDots();
}

void Counter::resetNumberToZero()
{
    totalTapCount = 0;
    
    calculateDots();
}

void Counter::calculateDots()
{
    unsigned long int temporaryCounterNumber = totalTapCount;
    
    oneDigit   = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    twoDigit   = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    threeDigit = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    fourDigit  = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    fiveDigit  = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    sixDigit   = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    clearAllString();
    fillAllStringsWithDots();
}

void Counter::clearAllString()
{
    oneDots.clear();
    twoDots.clear();
    threeDots.clear();
    fourDots.clear();
    fiveDots.clear();
    sixDots.clear();
}

void Counter::fillAllStringsWithDots()
{
    fillOneStringWithDots(oneDigit, oneDots);
    fillOneStringWithDots(twoDigit, twoDots);
    fillOneStringWithDots(threeDigit, threeDots);
    fillOneStringWithDots(fourDigit, fourDots);
    fillOneStringWithDots(fiveDigit, fiveDots);
    fillOneStringWithDots(sixDigit, sixDots);
}

void Counter::fillOneStringWithDots(const int &dotCount, String &string)
{
    for(int i = 0; i < dotCount; i++)
    {
        string += ". ";
    }
}

String Counter::returnDigitsString(const int &number)
{
    switch (number)
    {
        case 1:
            return oneDots;
            break;
         
        case 2:
            return twoDots;
            break;
            
        case 3:
            return threeDots;
            break;
            
        case 4:
            return fourDots;
            break;
            
        case 5:
            return fiveDots;
            break;
            
        default:
            return sixDots;
            break;
    }
}

unsigned long int Counter::getTotalTapCount()
{
    return totalTapCount;
}
