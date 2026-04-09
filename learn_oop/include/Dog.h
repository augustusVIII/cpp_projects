#pragma once // prevents the file from being included twice

#include <string>

class Dog
{
    public:
        // constructors
        Dog(); // default constructor (no args)
        Dog(std::string name, int age); // parameterized constructor
        Dog(const Dog& other); // copy constructor
        ~Dog(); // destructor

        // methods
        void bark();
        std::string getName();
        int getAge();

    private:
        // member variables (data)
        std::string name;
        int age;
};
