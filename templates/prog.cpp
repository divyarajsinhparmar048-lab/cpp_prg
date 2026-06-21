#include <iostream>
#include<string>
using namespace std;

template <int  N,typename T>

class Array
{
    T m_array[N];

    public:
    int getsize(){return N;}
};



int main()
{
    Array <5,string> array;
    int a = array.getsize();
    cout << a<<endl;44545454545
    return 0;
}