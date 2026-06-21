#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

void sort(char **name, int n);

int main()
{
    int n;
    cin >> n;
    getchar();

    char **name = (char **)malloc(sizeof(char *) * n);

    for (int i = 0; i < n; i++)
    {
        name[i] = (char *)malloc(sizeof(char) * 2001);
    }

    for (int j = 0; j < n; j++)
    {
        scanf("%[^\n]s", name[j]);
        getchar();
    }

    sort(name, n);

    for (int m = 0; m < n; m++)
    {
        cout << name[m] << endl;
    }

    for (int k = 0; k < n; k++)
    {
        free(name[k]);
    }

    free(name);

    sort(name, n);
    return 0;
}

void sort(char **name, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcasecmp(name[j], name[j + 1]) < 0)
            {
                char *temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    return;
}