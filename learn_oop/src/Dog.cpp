#include "Dog.h"
#include <iostream>

// constructore: Dog:: means "this belongs to the Dog class"
Dog::Dog(std::string name, int age)
{
    this->name = name; // "this" refers to the current object
    this->age = age;
}

void Dog::bark()
{
    std::cout << name << " says: Woof!\n";
}

std::string Dog::getName()
{
    return name;
}

int Dog::getAge()
{
    return age;
}
