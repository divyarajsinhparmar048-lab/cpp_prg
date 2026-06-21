#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef struct
{
    int rno;
    float cpi;
    char nm[13];
} stu;

int main()
{
    int i = 0;

    void *v = malloc(5 * sizeof(stu));

    stu *e = (stu *)v;
    stu *e1 = (stu *)v;

    stu(*t)[5] = (stu(*)[5])v;

    for (i = 0; i < 5; i++)
    {
        cin >> (e + i)->nm >> (e + i)->rno >> (e + i)->cpi;
    }

    cout << fixed;

    for (i = 0; i < 5; i++)
    {
        cout << (e + i)->nm << " " << (e + i)->rno << " " << (e + i)->cpi << endl; // Pointer and Offset

        cout << (&e[i])->nm << " " << (&e[i])->rno << " " << (&e[i])->cpi << endl; // Index Notation

        cout << (e[i]).nm << " " << (e[i]).rno << " " << (e[i]).cpi << endl; // Index Notation

        cout << (e1)->nm << " " << (e1)->rno << " " << (e1)->cpi << endl; // Pointer Incrementation
        e1++;

        // Index Notation with Pointer of Memory
        cout << (&t[0][i])->nm << " " << (&t[0][i])->rno << " " << (&t[0][i])->cpi << endl;
    }

    cout << endl;
    free(t);

    return 0;
}