// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

//global variables - memory is managed staticly by the compiler, allocated int he data segment by memort, once hte program ends, their memory is freed
// variables maybe local to their scopes, can be declared in functions or loops, but once the execution exit their scope, they are deleted and memory is free. it's automatic variables since they're managed by the compiler and are usually allocated in the stack segment of memory which is temporary
int a, b = 5;

int main(){
    bool my_flag; 
    a = 7;
    my_flag = false;
    std::cout << "Hi There!" << std::endl << std::endl;
    
    std::cout << "The value of a is " << a << std::endl;
    std::cout << "The value of b is " << b << std::endl;
    std::cout << "The value of flag is " << my_flag << std::endl << std::endl;
    
    my_flag = true;

    std::cout << "The value of flag is " << my_flag << std::endl;
    std::cout << "The value of a + b is " << a + b << std::endl;
    std::cout << "The value of b - a is " << b - a << std::endl << std::endl;

    //unsigned variable to store a negative number
    unsigned int positive;
    positive = b - a;
    std::cout << "The value of b - a (unsigned) is " << positive << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
 