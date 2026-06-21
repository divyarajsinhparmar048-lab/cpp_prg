// if we write like this

// will it produce memory leak?????

#include <iostream>
using namespace std;
int main()
{
    void *vp = malloc(5 * sizeof(int));
    int *ip = (int *)vp;

    ip = (int *)realloc(ip, 10 * sizeof(int));

    if (ip == NULL)
    {
        free(vp);
        return -1;
    }

    // do with reallocated memory

    return 0;
}