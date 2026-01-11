// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream> // since it's in angled brackets, the preprocessor will look for the file in a predefined location
// since iostream is part of the standard library, it doesn't require an extension like http or https
#include <string>
#include <cstdint>

#define CAPACITY 5000 // directives do not end with a semicolon
#define DEBUG

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;

// directives are not usually indented with the code.
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif

    large += small; // short hand for -> larger = large + small
    std::cout << "The large integer is " << large << std::endl;
    // the way to include con conditionally is to use #ifdef directive

    std::cout << std::endl << std::endl;
    return (0);
}
