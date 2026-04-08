#pragma once // prevents the file from being included twice

#include <string>

class Dog
{
    public:
        // constructor
        Dog(std::string name, int age);

        // methods
        void bark();
        std::string getName();
        int getAge();

    private:
        // member variables (data)
        std::string name;
        int age;
};
