#include "Dog.h"
#include <iostream>

Dog::Dog()
{
    name  = "Unknown";
    age = 0;
}

// constructore: Dog:: means "this belongs to the Dog class"
Dog::Dog(std::string name, int age) : name(name), age(age)
{
    // the ":name(name), age(age)" is an initializer list
    // it's cleaner and faster than assigning inside the body.
}

Dog::Dog(const Dog& other)
{
    // copy constructor: make a deep copy of another Dog
    name = other.name
    age = other.age;
}

Dog::~Dog()
{
    // destructor: clean up resources here
    std::cout << name << "has left the building.\n";
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
