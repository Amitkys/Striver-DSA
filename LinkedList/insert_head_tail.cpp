#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
void insertAtHead(Node *&head, int data)
{
    // created a temp node
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int data){
    // created a temp node
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail -> next; // which is temp
}
// traversing all node
void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp =  temp -> next;
    }
    cout << endl;
}
int main()
{
    Node* node1 = new Node(56);
    // head and tail is 'node1'
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 100);
    insertAtTail(tail, 32);
    print(head);
}

// another way to insert
/*

#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};
void insertATHead(Node* &head, int data){
    if(head == nullptr){
        head = new Node(data);
    }

    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;

}
void traverse(Node* &head){
    if(head == nullptr){
        cout << "Linkedlist is empty" << endl;
        return;
    }
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}
int main(){
  Node* head = new Node(45);
  insertATHead(head, 34);
  traverse(head);
  
}


*/