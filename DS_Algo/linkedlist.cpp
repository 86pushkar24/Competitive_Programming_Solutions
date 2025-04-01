#include "bits/stdc++.h"
using namespace std;

// struct Node
class Node // whenever using self defined obejct, use class
{
public:
    int data;
    Node *Next;

public:
    // Constructor
    Node(int data1, Node *next1)
    {
        data = data1;
        Next = next1;
    }

public:
    // Constructor-2
    Node(int data1)
    {
        data = data1;
        Next = NULL;
    }
};

Node *convert2LL(vector<int> &arr)
{
    Node *head = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
    }
}

class Node
{
private:
    int data;
    Node *next;

public:
    Node(int data) : data(data), next(nullptr) {}
    int getData() { return data; }
    Node *getNext() { return next; }
    void setNext(Node *nex  tNode) { next = nextNode; }
};

int main()
{
    // Node x = Node(1, NULL);
    Node x = Node(1);
    cout << x.data << endl;
    cout << x.Next << endl;
    // Remember to do this
    Node *y = new Node(2, &x);
    cout << y->data << endl;
    cout << y->Next << endl;
    return 0;
}