#include <bits/stdc++.h>
using namespace std;

// Define a Node structure
struct Node
{
    int data;
    Node *next;

    // Constructor to initialize a new node
    Node(int val) : data(val), next(nullptr) {}
};

// Function to convert an array to a linked list
Node *arrayToLinkedList(int arr[], int size)
{
    if (size == 0)
        return nullptr;

    // Create head of the linked list
    Node *head = new Node(arr[0]);
    Node *current = head; 

    /* Iterate through the array
    and create linked list nodes*/
    for (int i = 1; i < size; i++)
    {
        current->next = new Node(arr[i]);
        current = current->next;
    }

    return head;
}

// Function to print the linked list
void printLinkedList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int lengthOfLinkedList(Node *head)
{
    int length = 0;
    Node *current = head;

    // Count the nodes
    while (current != nullptr)
    {
        length++;
        current = current->next;
    }

    return length;
}
bool searchElement(Node *head, int target)
{
    Node *current = head;
    // Traverse the linked list
    while (current != nullptr)
    {
        if (current->data == target)
        {
            return true;
        }
        current = current->next;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Convert array to linked list
    Node *head = arrayToLinkedList(arr, size);

    // Print the linked list
    printLinkedList(head);
    // Print the length of the linked list
    cout << "Length of linked list: " << lengthOfLinkedList(head) << endl;

    // Search for an element in the linked list
    int target = 3;
    if (searchElement(head, target))
    {
        cout << "Element " << target << " found in the linked list." << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the linked list." << endl;
    }

    return 0;
}