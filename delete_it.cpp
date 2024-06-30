#include <bits/stdc++.h>
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
void insertAtHead(Node* &head, int data){
    // creating new node for insertion
    Node* temp = new Node(data);
    temp -> next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    Node* node1 = new Node(100);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 56);
    insertAtHead(head, 45);
    print(head);
}