#include <iostream>
#include <exception>
using namespace std;
class DBZE : public exception
{
public:
    virtual const char *what() throw()
    {
        return "Divide by zero exception raised";
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
            DBZE y;
            exception *x = &y;
            throw(x);
        }

        cout << n1 / n2 << endl;
    }
    catch (exception *x)
    {
        cout << "catch DBZE: " << x->what();
    }

    // catch (exception &e)
    // {
    //     cout << "catch E: " << e.what();
    // }
}