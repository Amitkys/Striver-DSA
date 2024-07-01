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