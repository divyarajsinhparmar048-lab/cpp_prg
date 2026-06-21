#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ip;
    ip = malloc(10 * sizeof(int));
    *ip = 80;
    printf("%d", *ip);
    return 0;
}