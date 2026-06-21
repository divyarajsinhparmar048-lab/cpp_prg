#include <iostream>
using namespace std;
class Person
{
    int age;

public:
    void set_age(int age)
    {
        this->age = age;
    }
    void display() { cout << "Age=" << age; }
    Person olderPerson(Person p)
    {
        if (age > p.age)
            return *this;
        else
            return p;
    }
};
int main()
{
    Person p1, p2;
    p1.set_age(30);
    p2.set_age(40);
    Person o = p1.olderPerson(p2);
    o.display();
}