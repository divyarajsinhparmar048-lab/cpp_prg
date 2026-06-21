#include <iostream>
using namespace std;
template <typename T>
class MyListContainer
{
public:
    struct Node
    {
        T data;
        Node *next;
        Node(T val) : data(val), next(nullptr)
        {
        }
    };
    Node *head;

    class iterator
    {
    public:
        Node *current;
        iterator(Node *p) : current(p) {}
    };

    T &operator*() { return current->data; }
    iterator &operator++()
    {
        current = current->next;
    }
};