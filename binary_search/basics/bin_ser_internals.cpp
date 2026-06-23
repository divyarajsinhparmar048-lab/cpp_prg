#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(vector<int> &v, int search)
{
    // the proper algo to the binary search
    int size = v.size();
    int first = 0, mid;
    int last = size - 1;

    bool found = false;
    int i = 0;
    while (first <= last && !found)
    {
        i++;
        cout << "ITERATION : " << i << endl;
        cout << "SIZE : " << (last + 1) - first << endl;
        mid = (first + last) / 2;

        if (v[mid] == search)
        {
            found = true;
        }

        else
        {
            if (search < v[mid])
            {
                last = mid - 1;
            }

            else
            {
                first = mid + 1;
            }
        }
    }

    if (found)
    {
        return mid;
    }

    else
        return -1;

    // end of binary search algo
}

int main()
{
    int size;
    cout << "ENTER THE SIZE" << endl;
    cin >> size;

    vector<int> v(size);

    // cout << "ENTER THE SORTED VECT ELE" << endl;
    for (int i = 0; i < size; i++)
    {
        // cin >> v[i];
        v[i] = i + 1;
    }

    int search;
    cout << "ENTER THE NUMBER TO SEARCH BY THE INDEX" << endl;
    cin >> search;

    int ind = binary_search(v, search);

    if (ind == -1)
    {
        cout << "NOT FOUND" << endl;
    }

    else
        cout << "FOUND AT:\t" << ind << endl;

    return 0;
}
