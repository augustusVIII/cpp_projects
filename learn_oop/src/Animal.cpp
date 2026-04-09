#include "Animal.h"
#include <iostream>

Animal::Animal(std::string name, int age) : name(name), age(age) {}

std::string Animal::getName() const
{
    return name;
}

int Animal::getAge() const
{
    return age;
}

void Animal::eat()
{
    std::cout << name << " is eating.\n";
}

void Animal::speak()
{
    std::cout << name << " makes a sound.\n";
}
