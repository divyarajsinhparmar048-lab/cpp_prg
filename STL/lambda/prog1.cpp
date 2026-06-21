#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 7, 8, 1, 5};
    auto a = [](int n)
    { cout << n << " "; };

    for_each(v.begin(),
             v.end(), a);

    return 0;
}