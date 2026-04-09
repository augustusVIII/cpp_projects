#include "Dog.h"
#include <iostream>

// must call Animal's constructor first via initializer list
Dog::Dog(std::string name, int age, std::string breed) : Animal(name, age), breed(breed) {}

void Dog::speak()
{
    std::cout << name << " says: Woof!\n";
}

void Dog::fetch()
{
    std::cout << name << " fetches the ball\n";
}
