#include <iostream>
#include <exception>
using namespace std;

class Node
{
    int i;
    Node *next;

public:
    Node()
    {
        cout << "Node constructor called\n";
    }
    ~Node()
    {
        cout << "Node destructor called\n";
    }
};
class Node2 : public Node
{
public:
    int *ptr = NULL;
    Node2()
    {
        try
        {
            ptr = new int;
            cout << "Node2 constructor called\n";
            throw 5;
        }
        catch (int i)
        {
            delete ptr;
            // Before throwing out of constructor, compiler will emit code
            // to destroy already constructed members and base object
            // and free memory of object under construction
            throw;
        }
    }
    catch (...)
    {
        ~Node2()
        {
            delete ptr;
            cout << "Node2 destructor called\n";
        }
    }
};
int main()
{
    try
    {
        // block scope
        // destructor will be called when block ends
        // destructor will only be called if it was created successfully,
        // mean if there was no exception thrown out of constructor
        Node2 n2;
    }
    catch (...)
    {
        cout << "catch in main!\n";
    }
    cout << "This is a try catch demo!\n";
}
