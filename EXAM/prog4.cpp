#include <iostream>
using namespace std;

int main()
{
    static char *a =(char *) "hello";
    static  char *b =(char *) "world";


    string s1 = a;
    string s2 =b;

    s1[2] = 'j';

    cout << s1+s2;   
    return 0;

    
}