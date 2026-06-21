#include <iostream>
#include <exception>
using namespace std;

class DBZE : public exception
{
public:
    virtual const char *what() throw() override
    {
        return "Divide by zero exception!";
    }
};

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    try
    {
        if (n2 == 0)
        {
            throw new DBZE(); // throw pointer (heap object)
        }
        cout << n1 / n2 << "\n";
    }
    catch (exception *e) // catch pointer = dynamic binding
    {
        cout << e->what() << "\n"; // calls DBZE::what() due to virtual
        delete e;                  // must delete to avoid memory leak
    }

    return 0;
}