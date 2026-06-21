#include <iostream>
// #include <stdlib.h>
using namespace std;
int main()
{
    int *ip;
    ip = (int *)calloc(10, sizeof(int));
    //*ip = 80;
    cout << *ip;
    return 0;
}