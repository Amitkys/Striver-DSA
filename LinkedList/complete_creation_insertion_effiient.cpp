#include <bits/stdc++.h>
using namespace std;

// Class representing a node in the linked list
class Node {
public:
    int data;  // Data stored in the node
    Node* next;  // Pointer to the next node in the list

    // Constructor to initialize the node with data
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to insert a node at the head of the linked list
void insertAtHead(Node* &head, int data) {
    // If the list is empty, create a new node and make it the head
    if (head == nullptr) {
        head = new Node(data);
        return;
    }
    // Otherwise, create a new node, set its next to the current head, and update the head
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// Function to insert a node at the bottom of the linked list
void insertAtBottom(Node* &head, int data) {
    // If the list is empty, create a new node and make it the head
    if (head == nullptr) {
        head = new Node(data);
        return;
    }
    // Otherwise, traverse to the end of the list and insert the new node
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new Node(data);
}

// Function to insert a node at a specific position in the linked list
void insertAtPosition(Node* &head, int data, int position) {
    // If the position is 1, insert at the head
    if (position == 1) {
        insertAtHead(head, data);
        return;
    }

    // To track position while traversing the list
    Node* temp = head;
    int currentPosition = 1;

    // Traverse to the node just before the desired position
    while (currentPosition < position - 1 && temp != nullptr) {
        temp = temp->next;
        currentPosition++;
    }

    // If the position is out of bounds (greater than the length of the list), insert at the bottom
    if (temp == nullptr) {
        insertAtBottom(head, data);
        return;
    }

    // Create a new node and insert it at the correct position
    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to print the linked list
void print(Node* &head) {
    // If the list is empty, print a message and return
    if (head == nullptr) {
        cout << "Node does not exist " << endl;
        return;
    }

    // Traverse the list and print each node's data
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    
    Node* head = nullptr;

    
    insertAtHead(head, 200);    
    insertAtHead(head, 300);    
    insertAtBottom(head, 50);   
    insertAtBottom(head, 30);   
    insertAtPosition(head, 45, 4);
    insertAtPosition(head, 400, 1);
    // Print the list
    print(head);

    return 0;
}
