#include "Dog.h"
#include <iostream>

int main()
{
    Dog; // default constructor
    Dog myDog("Rex", 3); // create a Dog object
    Dog c = myDog; // copy constructor
    // ~Dog() runs automatically when go out of scope. In this case, the main() function.

    std::cout << Dog << '\n';
    std::cout << myDog << '\n';
    std::cout << c << '\n';

    return 0;
}
