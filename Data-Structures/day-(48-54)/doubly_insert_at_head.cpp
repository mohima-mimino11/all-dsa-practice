#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
    int val;
    Node* next;
    Node* prev;
  Node(int val){
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void insertAtHead(Node* &head, Node* &tail,int val){ // Time - O(1)
  Node* newNode = new Node(val);
  if(head == NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}
void printForward(Node* head){
  Node* tmp = head;
  while(tmp != NULL){
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}


int main(){
  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* tail = new Node(30);
  
  head->next = a;
  a->prev = head;
  a->next = tail;
  tail->prev= a;
  // Node* head = NULL;
  // Node* tail = NULL;
  insertAtHead(head,tail, 100);
  insertAtHead(head,tail, 200);
  insertAtHead(head,tail, 300);

  printForward(head);
 
  return 0;
}