#include "Dog.h"
#include <iostream>

int main()
{
    Dog d("Rex", 3, "Labrador");
    d.eat(); // inherited from Animal
    d.speak(); // Dog's version of speak()
    d.fetch(); // Dog-only

    Animal* ptr = &d; // pointer to Animal, holds a Dog
    ptr->speak(); // still calls Dog::speak() - this is POLYMORPHISM

    return 0;
}
