#include <iostream>
using namespace std;

class DynamicArray
{
    int *ptr;
    int size=0;
    int capacity=0;

public:
    

    DynamicArray(int cap)
    {
        size = 0;
        capacity = cap;
        ptr = (int *) malloc (capacity*sizeof(int));
    }

    ~DynamicArray()
    {
       free(ptr);
    }

    int insert(int val)
    {
        if (size == capacity)
        {
            if (capacity == 0)
            {
                capacity = 1;
            }
            else
            {
                capacity *= 2;
            }
            ptr =(int *) realloc(ptr,capacity*sizeof(int));
        }
        
        *(ptr+size) = val;
        size++;
        return 0;
    }


     void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << ptr[i] << " ";
        }

        cout << endl;
    }

    int operator[](int i)
    {
        return *(ptr+i);
    }
};

int main()
{
    DynamicArray d1(10);
    for (int i = 0; i < 10; i++)
    {
        d1.insert(i*i);
    }
    for (int i = 0; i < 10; i++)
    {
        cout <<d1[i]<<" ";
    }
    cout << endl;

    DynamicArray d2(0);
    for (int i = 0; i < 10; i++)
    {
        d2.insert(i*i);
    }
   
    for (int i = 0; i < 10; i++)
    {
        cout <<d1[i]<<" ";
    }
    cout << endl;

    d2.display();
    return 0;
}