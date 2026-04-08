#include "Dog.h"
#include <iostream>

int main()
{
    Dog myDog("Rex", 3); // create a Dog object
    myDog.bark(); // Rex says: Woof!

    std::cout << myDog.getName() << " is " << myDog.getAge() << " years old.\n";

    return 0;
}
