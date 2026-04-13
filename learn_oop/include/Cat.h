#pragma once
#include <Animal.h>

class Cat : public Animal // Dog inherits from Animal
{
    public:
        Cat(std::string name, int age, std::string breed);
        void speak() override; // overrides Animal::speak()

    private:
        std::string breed;
};
