// using lambda with a capture

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

    Student(int r, string n, double d) : roll(r), name(n), cpi(d)
    {
    }
};

void print(const vector<Student> &v)
{
    for (auto s : v)
    {
        cout << s.roll << " " << s.name << " " << s.cpi << "\n";
    }
    return;
}

int main()
{

    vector<Student> v = {
        {12, "manu", 9.87},
        {34, "deepa", 9.8},
        {45, "chirag", 5.7},
        {78, "bhoomi", 8.8},
        {56, "vasu", 7.8}};

    bool ascending = true;
    int comparator = 3;
    sort(v.begin(), v.end(), [ascending, comparator](const Student &a, const Student &b)
         {
            bool res;
        if (comparator == 1)
            res = a.roll < b.roll;

        else if (comparator == 2)
            res = a.name < b.name;

        else
            res = a.cpi < b.cpi; 
            
        return ascending ? res : !res; });

    print(v);

    return 0;
}