// binary search using recursion

/*
Documentation:
[Open Notes](./binarysearch.md)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(vector<int> v, int tar, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (v[mid] == tar)
        {
            return mid;
        }

        else
        {
            if (tar > v[mid])
            {
                st = mid + 1;
            }

            else
            {
                end = mid - 1;
            }
        }
        return binary_search(v, tar, st, end);
    }

    return -1;
}

int main()
{

    vector<int> arr = {1, 30, 45, 67, 89, 90};
    cout << binary_search(arr, 675, 0, 5) << endl;

    return 0;
}