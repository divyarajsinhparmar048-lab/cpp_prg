#include <iostream>
#include <queue>

using namespace std;
int main()
{
    queue<int> q;
    q.push(15);
    q.push(17);
    q.push(19);
    q.push(21);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout << q.size();
    return 0;
}