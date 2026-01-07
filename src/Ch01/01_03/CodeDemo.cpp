// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream> // library for inputs n outputs
#include <string> // library for strings

int main(){
    // adding in vid request
    std::cout << "Please enter your name: " ;


    std::string str; //declaring a string var and it will hold the user's input

    std::cin >> str; //used in the opposite direction as cout! saying that the input is going into the variable str
    std::cout << std::endl << std::endl;

    std::cout << "Nice to meet you, " << std::flush; // learned that endl is using std::flush and /n so to get rid of the /n component i used just std::flush
    
    std::cout << str; 

    // now taking the input from str and outputting using cout

    // FYI: the cin object can only be used for single words, so for strings with spaces, we have to use a different special function to do so.

    std::cout << std::endl << std::endl;
    return (0);
}
