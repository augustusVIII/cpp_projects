#include "Cat.h"
#include <iostream>

// must call Animal's constructor first via initializer list
Cat::Cat(std::string name, int age, std::string breed) : Animal(name, age), breed(breed) {}

void Cat::speak()
{
    std::cout << name << " says: Meow!\n";
}
