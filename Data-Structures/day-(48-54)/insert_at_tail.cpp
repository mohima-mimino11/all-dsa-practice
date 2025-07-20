#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
    int val;
    Node* next;
  Node(int val){
    this->val = val;
    this->next = NULL;
  }
};
void insertAtTail(Node* &head, int val){  // Time complexity - O(N^2)
  Node* newNode = new Node(val);
  Node* tmp = head;
  while(tmp->next != NULL){
    tmp = tmp->next;
  }
  // rn tmp is at last node
  tmp->next = newNode;
}
void printLinkedList(Node* head){
  Node* tmp = head;
  while(tmp != NULL){
    cout<< tmp->val << endl;
    tmp = tmp->next;
  }
}
int main(){
  Node* head = new Node(10);
  Node* a = new Node(20);
  Node* b = new Node(30);

  head->next = a;
  a->next = b;

  insertAtTail(head, 70);
  insertAtTail(head, 90);
  

  printLinkedList(head);

  return 0;
}