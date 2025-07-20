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
void insertAtAnyPostion(Node* &head,int idx, int val){ // Time complexity - O(N)
  Node* newNode = new Node(val);
  Node* tmp = head;
  for(int i = 0; i < idx-1; i++){
    tmp = tmp->next;
    if(tmp == NULL){
      return;
    }
  }
  // tmp is at idx-1 now
  newNode->next = tmp->next;
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

  insertAtAnyPostion(head,2, 100);
  insertAtAnyPostion(head,10, 200);
  
  printLinkedList(head);

  return 0;
}