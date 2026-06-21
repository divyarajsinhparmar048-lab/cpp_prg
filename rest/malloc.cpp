#include <iostream>
using namespace std;
int main()
{
    int *dyn_arr = (int *)malloc(10 * sizeof(int));

    if (*dyn_arr == 0)
    {
        cout << "memory allocation failed" << endl;
        return -1;
    }

    for (int i = 0; i < 10; i++)
        cin >> dyn_arr[i];

    for (int i = 0; i < 10; i++)
        cout << dyn_arr[i] << "\t";
    return 0;
}