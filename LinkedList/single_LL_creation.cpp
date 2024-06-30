#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    // constructor for creating node
    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};
int main(){
  Node* node1 = new Node(54);
  Node* node2 = new Node(12);
  cout << node1 -> data << endl;
  cout << node2 -> data << endl;
  return 0;  
}