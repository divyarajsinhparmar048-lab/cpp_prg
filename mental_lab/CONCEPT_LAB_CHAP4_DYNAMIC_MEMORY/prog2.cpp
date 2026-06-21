#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

typedef struct
{
    int r_no;
    int marks;
    char dept[3];
} student;

int main()
{

    int n;
    cin >> n;
    student *s = (student *)malloc(sizeof(student) * n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].r_no;
        cin >> s[i].marks;
        cin >> s[i].dept;
    }

    int max = s[0].marks;

    for (int j = 1; j < n; j++)
    {
        if (s[j].marks > max)
        {
            max = s[j].marks;
        }
    }

    cout << max << endl;

    int max1 = 0, max2 = 0, max3 = 0;

    for (int k = 0; k < n; k++)
    {
        if ((!strcmp(s[k].dept, "CE")) && s[k].marks > max1)
        {
            max1 = s[k].marks;
        }

        if ((!strcmp(s[k].dept, "EC")) && s[k].marks > max2)
        {
            max2 = s[k].marks;
        }

        if ((!strcmp(s[k].dept, "IT")) && s[k].marks > max3)
        {
            max3 = s[k].marks;
        }
    }

    cout << max1 << '\t' << "CE" << endl
         << max2 << '\t' << "EC" << endl
         << max3 << '\t' << "IT";

    free(s);

    return 0;
}
