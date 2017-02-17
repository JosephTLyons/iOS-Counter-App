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
    tapCount = 0;
    
    onesPlaceDotCount             = 0;
    tensPlaceDotCount             = 0;
    hundredsPlaceDotCount         = 0;
    thousandsPlaceDotCount        = 0;
    tenThousandsPlaceDotCount     = 0;
    hundredThousandsPlaceDotCount = 0;
}

void Counter::incrementNumber(const int &input)
{
    tapCount += input;
}

void Counter::decrementNumber()
{
    tapCount--;
}

void Counter::resetNumberToZero()
{
    tapCount = 0;
}

void Counter::populateDotStrings()
{
    calculateNumberOfDotsPerString();
    clearAllStrings();
    fillAllStringsWithDots();
}

void Counter::calculateNumberOfDotsPerString()
{
    unsigned long int temporaryTapCountNumber = tapCount;

    onesPlaceDotCount             = temporaryTapCountNumber % 10;
    temporaryTapCountNumber /= 10;
    
    tensPlaceDotCount             = temporaryTapCountNumber % 10;
    temporaryTapCountNumber /= 10;
    
    hundredsPlaceDotCount         = temporaryTapCountNumber % 10;
    temporaryTapCountNumber /= 10;
    
    thousandsPlaceDotCount        = temporaryTapCountNumber % 10;
    temporaryTapCountNumber /= 10;
    
    tenThousandsPlaceDotCount     = temporaryTapCountNumber % 10;
    temporaryTapCountNumber /= 10;
    
    hundredThousandsPlaceDotCount = temporaryTapCountNumber % 10;
    temporaryTapCountNumber /= 10;
}

void Counter::clearAllStrings()
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
    return tapCount;
}
