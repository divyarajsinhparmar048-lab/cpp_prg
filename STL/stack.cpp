#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<string> st1;
    st1.top() = string("xammp");
    while (!st1.empty())
    {
        cout << st1.top();
        st1.pop();
    }

    return 0;
}
