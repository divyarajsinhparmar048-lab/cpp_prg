#include <iostream>
using namespace std;
int main()
{
    int *ip = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        cin >> *(ip + i);
    }
    for (int j = 0; j < 5; j++)
    {
        cout << *(ip + j) << '\t';
    }

    cout << '\n';

    free(ip);

        ip = NULL;

    return 0;
}