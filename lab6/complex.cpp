#include <iostream>
#include <iomanip>

using namespace std;

class ComplexNumber
{
    float re;
    float im;

public:
    ComplexNumber(float a, float b)
    {
        re = a;
        im = b;
    }

    ComplexNumber operator+(const ComplexNumber &b)
    {
        ComplexNumber t = *this;
        t.re += b.re;
        t.im += b.im;
        return t;
    }

    ComplexNumber operator*(const ComplexNumber &b)
    {
        ComplexNumber t = *this;
        re *= b.re;
        im *= b.im;
        return t;
    }

    ComplexNumber operator*(float a)
    {
        ComplexNumber t = *this;
        re *= a;
        im *= a;
        return t;
    }

    void print()
    {
        cout << re << "\t" << im << endl;
        return;
    }
};

int main()
{

    float real, imaginary;
    cin >> real >> imaginary;
    ComplexNumber result(real, imaginary);

    int n, i;
    cin >> n;

    int operation_code;
    float operand2_float;
    for (i = 0; i < n; i++)
    {
        cin >> operation_code;
        if (1 == operation_code)
        { // addition of two ComplexNumber objects
            cin >> real >> imaginary;
            ComplexNumber operand2_complex_number(real, imaginary);
            result = result + operand2_complex_number;
        }
        else if (2 == operation_code)
        { // multiplication of two ComplexNumber objects
            cin >> real >> imaginary;
            ComplexNumber operand2_complex_number(real, imaginary);
            result = result * operand2_complex_number;
        }
        else if (3 == operation_code)
        { // multiplication of ComplexNumber object and a float
            cin >> operand2_float;
            result = result * operand2_float;
        }
        else
        {
            cout << "Invalid operation" << endl;
        }
        result.print();
        cout << endl;
    }

    return 0;
}