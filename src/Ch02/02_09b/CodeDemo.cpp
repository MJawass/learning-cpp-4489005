// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring> // contains functions to handle character array string // c infront of the name means its apart of the c standard library

int main(){
    const size_t LENGTH1 = 25;

    char array_str1[LENGTH1] = "Hey guys! ";
    char array_str2[] = "What's up?";

    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's it going?";

    // concatinating the two char and string objects seperately
    strncat(array_str1, array_str2, LENGTH1); //3 args: destination string + will hold results, string to concatinate, length 
    // this functions modifies the first string, which isnt alwats conveinent
    std::cout << array_str1 << std::endl;    
    // for string class objects, you can concatinate it in the printing line of code
    std::cout << std_str1 + std_str2 << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
