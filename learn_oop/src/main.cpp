#include "Cat.h"
#include "Dog.h"
#include <iostream>

void make_it_speak(Animal* a)
{
    a->speak(); // if virtual: calls the right speak() for whatever 'a' is
}

int main()
{
    Dog d("Rex", 3, "Labrador");
    d.eat(); // inherited from Animal
    d.speak(); // Dog's version of speak()
    d.fetch(); // Dog-only

    Cat c("Whiskers", 2, "Persian");

    make_it_speak(&d);
    make_it_speak(&c);

    Animal* ptr = &d; // pointer to Animal, holds a Dog
    ptr->speak(); // still calls Dog::speak() - this is POLYMORPHISM

    return 0;
}
