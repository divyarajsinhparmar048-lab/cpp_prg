#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Different animals have different sounds!\n";
    }
};
class WildAnimal : public Animal
{
public:
    void sound(bool check) // override
    {
        cout << "Wild animals have different sounds!\n";
    }
};
class Lion : public WildAnimal
{
public:
    void sound() override
    {
        cout << "Lion roars!\n";
    }
};

int main()
{
    Animal animal, *animal_ptr = &animal;
    WildAnimal wa;
    Lion lion;
    animal_ptr->sound(); // Different animals have different sounds!
    animal_ptr = &wa;
    animal_ptr->sound(); // Different animals have different sounds!
    animal_ptr = &lion;
    animal_ptr->sound(); // lion roars
    return 0;
}