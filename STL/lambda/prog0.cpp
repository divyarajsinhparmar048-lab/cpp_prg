#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student
{
public:
    int roll;
    string name;
    double cpi;
    static int comparator;

    Student(int r, string n, double d) : roll(r), name(n), cpi(d)
    {
    }

    //     static bool compare(const Student &a, const Student &b)
    //     {
    //         if (comparator == 1)
    //             return a.roll < b.roll;

    //         else if (comparator == 2)
    //             return a.name < b.name;

    //         else
    //             return a.cpi < b.cpi;
    //     }
};

int Student::comparator = 1;

void print(const vector<Student> &v)
{
    for (auto s : v)
    {
        cout << s.roll << " " << s.name << " " << s.cpi << "\n";
    }
    return;
}

auto compare = [](const Student &a, const Student &b)
{
    if (Student::comparator == 1)
        return a.roll < b.roll;

    else if (Student::comparator == 2)
        return a.name < b.name;

    else
        return a.cpi < b.cpi;
};

int main()
{
    vector<Student> v = {
        {12, "manu", 9.87},
        {34, "deepa", 9.8},
        {45, "chirag", 5.7},
        {78, "bhoomi", 8.8},
        {56, "vasu", 7.8}};

    Student::comparator = 1;
    sort(v.begin(), v.end(), compare);
    cout << "Sorted By Roll No." << endl;
    print(v);

    cout << "-----------------------------------------------------" << endl;

    Student::comparator = 2;
    sort(v.begin(), v.end(), compare);
    cout << "Sorted By Name." << endl;
    print(v);

    cout << "-----------------------------------------------------" << endl;

    Student::comparator = 3;
    sort(v.begin(), v.end(), compare);
    cout << "Sorted By CPI." << endl;
    print(v);

    return 0;
}