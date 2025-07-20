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

void deleteAtAnyPosition(Node* &head, int idx){ // Time - O(N)
  Node* tmp = head;
  for(int i = 1; i < idx;i++){
    tmp = tmp->next;
  }
  Node* deleteNode = tmp->next;
  tmp->next = tmp->next->next;
  tmp->next->prev = tmp;
  delete deleteNode;
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
  deleteAtAnyPosition(head,1);
  printForward(head);
 
  return 0;
}