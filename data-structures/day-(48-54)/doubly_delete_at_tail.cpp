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

void deleteAtTail(Node* &head, Node* &tail){ // Time - O(1)
  Node* deleteNode = tail;
  tail = tail->prev;
  delete deleteNode;
  if(tail == NULL){
    head = NULL;
    return;
  }
  tail->next = NULL;
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
  deleteAtTail(head,tail);
  printForward(head);
 
  return 0;
}