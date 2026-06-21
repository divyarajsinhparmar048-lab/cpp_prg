#include <iostream>
// Class declaration
class Mat;
class Vect
{
    int vctr[3];
    friend Vect &product(Mat m, Vect v);

public:
    void initialize()
    {
        int i;
        for (i = 0; i < 3; i++)
            vctr[i] = i + 1;
    }
    void display()
    {
        int i;
        for (i = 0; i < 3; i++)
            std::cout << vctr[i] << std::endl;
    }
};

class Mat
{
    int matrix[3][3];

public:
    void initialize()
    {
        int i, j;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                matrix[i][j] = i + j;
    }
    void display()
    {
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                std::cout << matrix[i][j] << "\t";
            std::cout << std::endl;
        }
    }
    friend Vect &product(Mat m, Vect
                                    v);
};

Vect &product(Mat m, Vect v)
{
    Vect result;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        result.vctr[i] = 0;
        for (j = 0; j < 3; j++)
        {
            result.vctr[i] += m.matrix[i][j] * v.vctr[j];
        }
    }
    // warning: reference to local variable ‘result’ returned
    return result;
}
int main()
{
    Mat m;
    Vect v;
    m.initialize();
    std::cout << "Our matrx:" << std::endl;
    m.display();
    v.initialize();
    std::cout << "Our vector:" << std::endl;
    v.display();
    std::cout << "Our resultant vector:" << std::endl;
    product(m, v).display();
    return 0;
}