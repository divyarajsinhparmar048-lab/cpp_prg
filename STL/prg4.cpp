#include <iostream>
using namespace std;

template <typename T>
class vector
{
    T *ptr;
    size_t size;
    size_t cap;

public:
    typedef(T *) iterator;

    iterator begin()
    {
        return ptr;
    }

    iterator end()
    {
        return ptr + size;
    }

    void pushback(const T &val)
    {
        *(ptr + size + 1) = val;
        size++;
        cap++;
    }
};

int main()
{
}