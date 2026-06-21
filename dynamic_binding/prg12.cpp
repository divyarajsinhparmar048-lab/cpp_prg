#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() const
    {
        cout << "Constant: Base class method!\n";
    }
    virtual void sound()
    {
        cout << "Non-Constant: Base class method!\n";
    }
};
class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks!\n";
    }
};
class Lion : public Animal
{
public:
    void sound()
    {
        cout << "Lion roars!\n";
    }
};

int main()
{
    Animal animal;
    const Animal *animal_ptr = &animal;
    Animal *ptr = &animal;
    Dog dog;
    Lion lion;
    ptr->sound();
    animal_ptr->sound();
    ptr = &dog;
    ptr->sound();
    ptr = &lion;
    ptr->sound();
    return 0;
}