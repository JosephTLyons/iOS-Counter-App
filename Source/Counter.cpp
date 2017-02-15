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
    
    onesPlaceDotCount             = 0;
    tensPlaceDotCount             = 0;
    hundredsPlaceDotCount         = 0;
    thousandsPlaceDotCount        = 0;
    tenThousandsPlaceDotCount     = 0;
    hundredThousandsPlaceDotCount = 0;
}

void Counter::incrementNumber(const int &input)
{
    totalTapCount += input;
    
    populateDotStrings();
}

void Counter::decrementNumber()
{
    totalTapCount--;
    
    populateDotStrings();
}

void Counter::resetNumberToZero()
{
    totalTapCount = 0;
    
    populateDotStrings();
}

void Counter::populateDotStrings()
{
    unsigned long int temporaryCounterNumber = totalTapCount;
    
    // Calculate count of dots per string
    onesPlaceDotCount             = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    tensPlaceDotCount             = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    hundredsPlaceDotCount         = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    thousandsPlaceDotCount        = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    tenThousandsPlaceDotCount     = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    hundredThousandsPlaceDotCount = temporaryCounterNumber % 10;
    temporaryCounterNumber /= 10;
    
    // Clear and fill strings
    clearAllString();
    fillAllStringsWithDots();
}

void Counter::clearAllString()
{
    onesPlaceDotString.clear();
    tensPlaceDotString.clear();
    hundredsPlaceDotString.clear();
    thousandsPlaceDotString.clear();
    tenThousandsPlaceDotString.clear();
    hundredThousandsPlaceDotString.clear();
}

void Counter::fillAllStringsWithDots()
{
    fillOneStringWithDots(onesPlaceDotCount, onesPlaceDotString);
    fillOneStringWithDots(tensPlaceDotCount, tensPlaceDotString);
    fillOneStringWithDots(hundredsPlaceDotCount, hundredsPlaceDotString);
    fillOneStringWithDots(thousandsPlaceDotCount, thousandsPlaceDotString);
    fillOneStringWithDots(tenThousandsPlaceDotCount, tenThousandsPlaceDotString);
    fillOneStringWithDots(hundredThousandsPlaceDotCount, hundredThousandsPlaceDotString);
}

void Counter::fillOneStringWithDots(const int &dotCount, String &dotString)
{
    for(int i = 0; i < dotCount; i++)
    {
        dotString += ". ";
    }
}

String Counter::returnDigitsString(const int &stringNumberToReturn)
{
    switch (stringNumberToReturn)
    {
        case 1:
            return onesPlaceDotString;
            break;
         
        case 2:
            return tensPlaceDotString;
            break;
            
        case 3:
            return hundredsPlaceDotString;
            break;
            
        case 4:
            return thousandsPlaceDotString;
            break;
            
        case 5:
            return tenThousandsPlaceDotString;
            break;
            
        default:
            return hundredThousandsPlaceDotString;
            break;
    }
}

unsigned long int Counter::getTotalTapCount()
{
    return totalTapCount;
}
