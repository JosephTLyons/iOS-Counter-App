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
    unsigned long int counterNumber;
    String numberHolderString;
    
public:
    
    Counter();
    
    void incrementNumber(const int &input);
    void decrementNumber();
    void resetNumberToZero();
    void setIntToStringValue();
    
    unsigned long int getIntNumber();
    
    String getNumberHolderString();
};

#endif /* Counter_hpp */
