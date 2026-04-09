#pragma once
#include <string>

class Animal
{
    public:
        Animal(std::string name, int age);
        std::string getName() const;
        int getAge() const;
        void eat();
        virtual void speak() // virtual means child classes can override this

    protected:
        std::string name;
        int age;
};
