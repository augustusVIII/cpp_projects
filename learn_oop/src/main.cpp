#include "Dog.h"
#include <iostream>

int main()
{
    Dog a; // default constructor
    Dog myDog("Rex", 3); // create a Dog object
    Dog c = myDog; // copy constructor
    // ~Dog() runs automatically when go out of scope. In this case, the main() function.

    std::cout << a.getName() << a.getAge() << '\n';
    std::cout << myDog.getName() << myDog.getAge() << '\n';
    std::cout << c.getName() << c.getAge() << '\n';

    return 0;
}
