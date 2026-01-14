// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    // implicit conversions, dont explictily cast the values
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66; //doesnt have an f so its a double, double can be converted to float
    sgn = flt; // since we cannot assigne a floating point value to a variable, the type will be converted, value gets truncated
    unsgn = sgn; //trying to assign a negative number to an unsigned variable, since it's unreasonable, the number will be copied as is (32 bit version of the two's compliment of 7) -- same binary number but means different values in the variables

    std::cout << "Float: " << flt << std::endl;
    std::cout << "(int32) Signed: " << sgn << std::endl;
    std::cout << "(uint32) Unsigned: " << (int32_t)unsgn << std::endl;

    
    std::cout << std::endl << std::endl;
    return (0);
}
