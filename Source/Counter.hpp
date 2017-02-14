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
    unsigned long int totalTapCount;
    
    int oneDigit;
    int twoDigit;
    int threeDigit;
    int fourDigit;
    int fiveDigit;
    int sixDigit;
    
    String oneDots;
    String twoDots;
    String threeDots;
    String fourDots;
    String fiveDots;
    String sixDots;
    
    String numberHolderString;
    
public:
    Counter();
    
    void incrementNumber(const int &input);
    void decrementNumber();
    void resetNumberToZero();
    void calculateDots();
    void clearAllString();
    void fillAllStringsWithDots();
    void fillOneStringWithDots(const int &dotCount, String &string);
    
    String returnDigitsString(const int &number);
    
    unsigned long int getTotalTapCount();
};

#endif /* Counter_hpp */
