#include <iostream>
#include <exception>
using namespace std;
class Node
{
    int i;
    Node *next;

public:
    Node() { cout << "constructor called\n"; }
    ~Node() { cout << "destructor called\n"; }
};
Node *create_node_array(int nodes) throw()
{
    Node *node = NULL;
    // try
    // {
    //     node = new Node[nodes];
    // }
    // catch (std::exception &ba)
    // { // #include<exception>
    //     cout << "Exception while creating node: " << ba.what() << endl;
    // }
    return node;
}
int main()
{
    long number_of_nodes;
    Node *node_arr_ptr;
    while (1)
    {
        cin >> number_of_nodes;
        try
        {
            node_arr_ptr = create_node_array(number_of_nodes);
            break;
        }
        catch (std::exception &ba)
        { // #include<exception>
            cout << "Exception while creating node: " << ba.what() << endl;
            number_of_nodes = 0;
        }
    }
    delete[] node_arr_ptr; // It is safe to delete NULL ptr (it is like no-op)
    cout << "This is a try catch demo! " << node_arr_ptr;
    return 0;
}
