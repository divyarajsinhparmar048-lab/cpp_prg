#include <iostream>
using namespace std;
int main()
{
    int *ip = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        cout << *(ip + i) << '\n';
    }

    cout << '\n'
         << '\n';

    int *p = (int *)calloc(5, sizeof(int));
    for (int j = 0; j < 5; j++)
    {
        cout << *(p + j) << '\n';
    }

    return 0;
}