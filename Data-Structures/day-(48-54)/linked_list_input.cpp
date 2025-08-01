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
void insertAtTail(Node* &head, Node* &tail, int val){ 
  // Time complexity - O(1) 
  Node* newNode = new Node(val);
  // edge case of linkedlist being empty
  if(head == NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}
void printLinkedList(Node* head){
  Node* tmp = head;
  while(tmp != NULL){
    cout<< tmp->val << endl;
    tmp = tmp->next;
  }
}
int main(){
  Node* head = NULL;
  Node* tail = NULL;
  int val;
  while(1){ // Time complexity: O(N)
    cin >> val;
    if(val == -1){
      break;
    }
    insertAtTail(head, tail, val);

  }

  printLinkedList(head);
  // cout << "Tail " << tail->val << endl; 
  return 0;
}