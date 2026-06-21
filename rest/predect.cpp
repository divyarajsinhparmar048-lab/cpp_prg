// A C++ program to demonstrate application
// of reference to a pointer.
#include <iostream>
using namespace std;

// A linked list node
struct Node {
    int data;
    struct Node* next;
};

/* Given a reference to pointer to the head of
   a list, insert a new value x at head */
void push(struct Node *&head, int x)
{
    struct Node* new_node = new Node;
    new_node->data = x;
    new_node->next = head;
    head = new_node;
}

// This function prints contents of linked
// list starting from head
void printList(struct Node* node)
{
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

/* Driver program to test above functions*/
int main()
{
    /* Start with the empty list */
    struct Node* head = NULL;
    push(head, 1);
    push(head, 2);
    push(head, 3);

    printList(head);

    return 0;
}