#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    short age;

protected:
    string gender;
    string name;

public:
    Person(string name, short age, string gender = "other") : name(name), gender(gender), age(age)
    {
    }

    void print()
    {
        cout << name << " " << gender << " " << age << " ";
        return;
    }
};

class Employee : public Person
{
private:
    int yearly_salary;

protected:
    string employee_id;
    const string employee_since;
    string designation;
    string department;

public:
    static int count;

    Employee(string name, string gender, int age, string department, string designation, string employee_since, int yearly_salary) : Person(name, age, gender), department(department), designation(designation), employee_since(employee_since), yearly_salary(yearly_salary)
    {
        employee_id = "E" + to_string(count++);
    }

    void print()
    {
        cout << employee_id << " ";
        Person::print();
        cout << department << " " << designation << " " << employee_since << " " << yearly_salary << endl;
        return;
    }

    void increase_sal(int per)
    {
        yearly_salary += ((yearly_salary * per) / 100);
        return;
    }

    void sort(Employee *arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            bool swapped = false;
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j]->yearly_salary > arr[j + 1]->yearly_salary)
                {
                    Employee *temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped)
                break; // Array is already sorted
        }
    }

    void change_d(string n_d)
    {
        designation = n_d;
    }

    string get_d()
    {
        return designation;
    }

    int get_sal()
    {
        return yearly_salary;
    }
};

int Employee ::count = 0;

class Manager : public Employee
{

protected:
    Employee *direct_report[10];

public:
    int c = 0;
    Manager(Employee const &e) : Employee(e)
    {
    }

    void print()
    {
        Employee ::print();
        sort(direct_report, c);
        for (int i = 0; i < c; i++)
        {
            direct_report[i]->print();
        }
        return;
    }

    void add_direct_report(Employee *p)
    {
        direct_report[c++] = p;
        return;
    }

    void change_designation(string old_d, string new_d)
    {
        for (int i = 0; i < c; i++)
        {
            if (direct_report[i]->get_d() == old_d)
            {
                direct_report[i]->change_d(new_d);
            }
        }
        return;
    }

    void increase_salary(string des, int per)
    {
        for (int i = 0; i < c; i++)
        {
            if (direct_report[i]->get_d() == des)
            {
                direct_report[i]->increase_sal(per);
            }
        }
        return;
    }
};

int main()
{
    string name, gender, department, designation, employee_since;
    short age;
    int yearly_salary;
    cin >> name >> gender >> age >> department >> designation;
    cin >> employee_since >> yearly_salary;
    Employee employee(name, gender, age, department, designation,
                      employee_since, yearly_salary);
    Manager manager(employee);

    int direct_reports_count = 0;
    cin >> direct_reports_count;

    Employee *employee_ptr;
    for (int i = 0; i < direct_reports_count; i++)
    {
        getchar(); // removing newline from input buffer
        cin >> name >> gender >> age >> department >> designation;
        cin >> employee_since >> yearly_salary;
        employee_ptr = new Employee(name, gender, age, department,
                                    designation, employee_since,
                                    yearly_salary);
        manager.add_direct_report(employee_ptr);
    }

    getchar(); // Removing newline from input buffer
    string existing_designation, new_designation;
    cin >> existing_designation >> new_designation;
    manager.change_designation(existing_designation, new_designation);

    float increment_percentage;
    cin >> designation >> increment_percentage;
    manager.increase_salary(designation, increment_percentage);

    manager.print();

    return 0;
}