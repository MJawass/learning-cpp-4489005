// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define AGE_LENGTH 4 //macro and they have no scope

//recommened alternative to macros; constants


int main(){
    const size_t AGE_LENGTH = 4; //local to main, a c++ line of code, not a pre-processor directive like macros
    // using size_t type is more appropriate than using int type
    int age[AGE_LENGTH];
    //with scalar values, you are allowed to initialze arrays at declaration, you do that by providing a list of values in curly brakcers
    // temps - floats
    float temps[] = {31.5, 32.7, 38.9}; //since there isnt an 'f' at the it's technicaly a list of doubles; sometimes okay not all the time (it is okay this time since the complier can assign the float version of those values to my array)
    //auto does not work for arrays - so type needs to be specified

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "The Age array has a length of " << AGE_LENGTH << " elements" << std::endl;
    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "Temperature[0] = " << temps[0] << std::endl;
    std::cout << "Temperature[1] = " << temps[1] << std::endl;
    std::cout << "Temperature[2] = " << temps[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
