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

void insertAtTail(Node* &head, Node* &tail,int val){ // Time - O(1)
  Node* newNode = new Node(val);
  if(head == NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}
void printForward(Node* head){
  Node* tmp = head;
  while(tmp != NULL){
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}
void reverseDoublyList(Node* head, Node*tail){
  for(Node *i = head, *j = tail; i != j && i->prev != j; i=i->next, j= j->prev){
    swap(i->val, j->val);
  }
}

int main(){
  Node* head = NULL;
  Node* tail = NULL;
  int val;
  while(1){
    cin >> val;
    if(val == -1){
      break;
    }
    insertAtTail(head, tail, val);
  }


  printForward(head);
  reverseDoublyList(head, tail);
  printForward(head);
  cout << head->val << endl;
  cout << tail->val << endl;
  return 0;
}