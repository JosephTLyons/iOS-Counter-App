//
//  Counter.hpp
//  iPhone Counter
//
//  Created by Joseph Lyons on 1/14/17.
//
//

#ifndef Counter_hpp
#define Counter_hpp

#include "../JuceLibraryCode/JuceHeader.h"

class Counter
{
private:
    unsigned long int tapCount;
    
    int onesPlaceDotCount;
    int tensPlaceDotCount;
    int hundredsPlaceDotCount;
    int thousandsPlaceDotCount;
    int tenThousandsPlaceDotCount;
    int hundredThousandsPlaceDotCount;
    
    String onesPlaceDotString;
    String tensPlaceDotString;
    String hundredsPlaceDotString;
    String thousandsPlaceDotString;
    String tenThousandsPlaceDotString;
    String hundredThousandsPlaceDotString;
    
public:
    Counter();
    
    void incrementNumber(const int &input);
    void decrementNumber();
    void resetNumberToZero();
    void populateDotStrings();
    void calculateNumberOfDotsPerString();
    void clearAllStrings();
    void fillAllStringsWithDots();
    void fillOneStringWithDots(const int &dotCount, String &string);
    
    String returnDigitsString(const int &number);
    
    unsigned long int getTotalTapCount();
};

#endif /* Counter_hpp */
