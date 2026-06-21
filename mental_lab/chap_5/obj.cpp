#include <iostream>
#include <cstring>
class Person
{
public:
    char name[50];
    int age;

    void change_name(char name[])
    {
        name[0] = 'R';
    }
    void change_age(int age)
    {
        this->age = 31;
    }
};

int main()
{
    Person person1;
    strcpy(person1.name, "Sita");
    person1.age = 30;
    person1.change_name(person1.name); // pass by pointer
    person1.change_age(person1.age);   // pass by value
    std::cout << person1.name << " ";
    std::cout << person1.age << std::endl;
    return 0;
}