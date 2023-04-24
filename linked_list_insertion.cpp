#include <bits/stdc++.h>
using namespace std;

void file_i_o()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

/*************************************************************/

/*
    Linked List

    |-----|-------|
    |     |address|
    |data |of next|-->NULL
    |     |node   |
    |-----|-------|
*/

class Node
{
public:
    int data;   // get input data
    Node *next; // point to address of next Node

    // constructor called manually
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// function to insert Node at start/head
void insertAtHead(Node *&head, int val)
{
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

// function to insert Node at end/tail
void insertAtTail(Node *&tail, int val)
{
    Node *temp = new Node(val);
    tail->next = temp;
    // tail = tail -> next;
    tail = temp;
}

// function to insert Node at specific position
void insertAtPosition(Node *&tail, Node *&head, int position, int val)
{

    // if postion=1 then inserting Node at first position
    if (position == 1)
    {
        insertAtHead(head, val);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, val);
        return;
    }

    // creating a Node for value
    Node *nodeToInsert = new Node(val);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// function to print/traverse all nodes till NULL
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void Main()
{

    Node *node1 = new Node(10); // created new Node statically

    // cout<< node1 -> data << endl; // print data of node1
    // cout<< node1 -> next << endl; // print address of next node present in node1

    Node *head = node1;
    Node *tail = node1;
    print(head);

    /* inserting node at head */
    // insertAtHead(head, 12);
    // print(head);

    // insertAtHead(head, 15);
    // print(head);

    /* inserting node at tail */
    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    /* inserting node at position 3 */
    insertAtPosition(tail, head, 3, 22);
    print(head);

    /* inserting node at first position */
    insertAtPosition(tail, head, 1, 2);
    print(head);

    /* inserting node at last position */
    insertAtPosition(tail, head, 6, 25);
    print(head);

    cout << "head : " << head->data << endl;
    cout << "tail : " << tail->data << endl;
}

/*************************************************************/

int main()
{
    clock_t begin = clock();
    // file_i_o();

    Main();

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}