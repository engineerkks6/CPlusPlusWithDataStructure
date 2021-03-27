#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtHead(node *&head, int value)
{
    node *n = new node(value);

    n->next = head;
    head = n;
}

void insertAtLast(node *&head, int value) // here Head is taken by reference
{
    node *n = new node(value); // a node is created

    if (head == NULL) // base case
    {
        head = n;
        return;
    }
    node *temp = head; // starting address od node OR First Element

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

void display(node *head) // here head is taken by value
{

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << "NULL";
}

bool search(node *head, int key)
{
    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteAtFirst(node *&head)
{
    node *todelete = head;

    head = head->next;

    delete todelete;
}
void deletion(node *&head, int value)
{

    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL) // if we have only one node and want tot delete
    {
        deleteAtFirst(head);
        return;
    }

    node *temp = head;
    //travershing
    while (temp->next->data != value)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;   // base case
    temp->next = temp->next->next; // link changed

    delete todelete;
}

node *reverse(node *&head) // TO reverse a linked list
{
    node *prevPtr = NULL;
    node *currentPtr = head;
    node *nextPtr;

    while (currentPtr != NULL)
    {
        nextPtr = currentPtr->next;

        currentPtr->next = prevPtr; //Linked Changed

        prevPtr = currentPtr;
        currentPtr = nextPtr;
    }
    return prevPtr; // here previous pointer returns a new head
}

node *reverseRecursiveWay(node *&head)
{

    //base Case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = reverseRecursiveWay(head->next);

    head->next->next = head;
    head->next = NULL;

    return newhead;
}

//Reverse k nodes

node *reversek(node *&head, int k)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;

    int count = 0;

    while (currPtr != NULL && count < k)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;
        prevPtr = currPtr;
        currPtr = nextPtr;

        count++;
    }
    if (nextPtr != NULL)
    {
        head->next = reversek(nextPtr, k);
    }

    return prevPtr;
}
int main()
{

    node *head = NULL;
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 4);
    insertAtLast(head, 5);
    insertAtLast(head, 6);

    display(head);
    cout << endl;

    // insertAtHead(head, 15);
    // display(head);

    cout << endl;

    // cout << search(head, 15) << endl;

    // deletion(head, 13);
    // display(head);
    cout << endl;
    // deleteAtFirst(head);
    // display(head);

    // node *newhead = reverse(head);
    // display(newhead);

    // node *newhead1 = reverseRecursiveWay(head);
    // display(newhead1);

    int k = 2;
    node *newhead = reversek(head, k);
    display(newhead);

    return 0;
}