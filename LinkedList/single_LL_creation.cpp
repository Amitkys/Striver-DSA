#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    // constructor for settinng data
    Node(int data){
        this-> data = data;
        this -> next = nullptr;
    }
};
int main()
{

  // single node created
  Node* node1 = new Node(5);
  Node* node2 = new Node(6);
  // printing data of the single node
  cout << node1 -> data << endl;  

    return 0;
}