#pragma once
#include <Animal.h>

class Dog : public Animal // Dog inherits from Animal
{
    public:
        Dog(std::string name, int age, std::string breed);
        void fetch(); // Dog-specific method
        void speak() override; // overrides Animal::speak()

    private:
        std::string breed;
};
