#include <stdio.h>
int main()
{
    char *s1 = "hello";
    char *s2 = "hello";
    if (s1 == s2)
        printf("sambbe\n");

    *s1 = 'a';
    printf("%s", s1);
    return 0;
}