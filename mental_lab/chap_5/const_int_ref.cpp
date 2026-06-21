#include <iostream>
using namespace std;
const int &fun(int &num)
{
    --num;
    return num--;
}
int main()
{
    int i = 10;
    const int &ret_val = fun(i);
    cout << i << " " << ret_val << endl;
    return 0;
}
