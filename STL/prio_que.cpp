#include <iostream>
#include <queue>
using namespace std;

class Person
{
public:
    int age;
    float salary;
    Person(int age, float salary)
    {
        this->age = age;
        this->salary = salary;
    }
};
bool operator>(const Person p1, const Person &p)
{
    return p1.age < p.age;
}
int main()
{
    std::priority_queue<Person> pri_que;
    pri_que.push(Person(32, 400000));
    pri_que.push(Person(22, 600000));
    pri_que.push(Person(32, 300000));
    pri_que.push(Person(42, 500000));
    pri_que.push(Person(22, 800000));
    while (!pri_que.empty())
    {
        Person p = pri_que.top();
        pri_que.pop();
        cout << p.age << " " << p.salary << "\n";
    }
    return 0;
}