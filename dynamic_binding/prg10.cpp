#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() const
    {
        cout << "Different animals have different sounds!\n";
    }
};
class Dog : public Animal
{
public:
    virtual void sound() const override
    {
        cout << "Dog barks!\n";
    }
};
class Lion : public Animal
{
public:
    virtual void sound() const override
    {
        cout << "Lion roars!\n";
    }
};

int main()
{
    Animal animal, *animal_ptr = &animal;
    Dog dog;
    Lion lion;
    animal_ptr->sound();
    animal_ptr = &dog;
    animal_ptr->sound();
    animal_ptr = &lion;
    animal_ptr->sound();
    return 0;
}