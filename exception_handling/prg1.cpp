#include <iostream>
using namespace std;
int main()
{

    try
    {
        int num1, num2, result;
        cin >> num1 >> num2;
        try
        {
            if (0 == num2)
            {
                throw "Div by 0 caught";
            }
            result = num1 / num2;
            cout << num1 << " / " << num2 << " = " << result << endl;
        }
        catch (const char *str)
        {
            cout << "Inner Catch-1" << str << endl;
            throw;
        }

        catch (const char *ptr)
        {
            cout << "Inner catch-2" << endl;
        }
    }
    catch (int n)
    {
        cout << "Exception caught int" << n << endl;
    }
    catch (const char *str)
    {
        cout << "Exception caught *str" << str << endl;
    }
    catch (...)
    {
        cout << "catch all called" << endl;
    }
    cout << "This is a try catch demo!";
    return 0;
}
