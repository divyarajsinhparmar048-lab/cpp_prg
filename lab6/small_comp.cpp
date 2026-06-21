#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Company;

class Employee
{
    string employee_id;
    string name;
    string designation;
    int salary;

public:
    friend class Company;
    Employee(string employee_id, string name, string designation, int salary)
    {
        this->employee_id = employee_id;
        this->designation = designation;
        this->name = name;
        this->salary = salary;
    }

    Employee()
    {
    }

    void increment(int x)
    {
        salary += x;
    }
};

class Company
{
    string name;
    vector<Employee> v;

public:
    Company(string name)
    {
        this->name = name;
    }

    void add_employee(Employee &e)
    {
        int s = 1;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].employee_id == e.employee_id)
            {
                s = 0;
                break;
            }
        }
        if (s)
            v.push_back(e);
        return;
    }

    void print()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i].employee_id << "\t" << v[i].name << "\t" << v[i].designation << "\t" << v[i].salary << endl;
        }
    }

    void increase_salary(string id, int amt)
    {
        int i = -1;
        for (i = 0; i < v.size(); i++)
        {
            if (v[i].employee_id == id)
            {
                break;
            }
        }
        if (i == -1)
        {
            return;
        }
        v[i].salary += amt;
        return;
    }
};

int main()
{
    string company_name;
    cin >> company_name;
    Company cmp("MyCompany");

    int n;
    cin >> n;
    string employee_id, employee_name, designation;
    int salary;
    Employee emp;
    for (int i = 0; i < n; i++)
    {
        getchar(); // Removing newline from input buffer
        cin >> employee_id >> employee_name >> designation >> salary;
        emp = Employee(employee_id, employee_name, designation, salary);
        cmp.add_employee(emp);
    }

    int m = 0, increment_amount;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        getchar(); // Removing newline from input buffer
        cin >> employee_id >> increment_amount;
        cmp.increase_salary(employee_id, increment_amount);
    }

    cmp.print();

    return 0;
}