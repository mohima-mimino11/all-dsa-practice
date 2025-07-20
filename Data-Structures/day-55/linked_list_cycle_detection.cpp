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
int main(){
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *b = new Node(30);
  Node *c = new Node(40);
  Node *d = new Node(50);

  head->next = a;
  a->next = b;
  b->next = c; 
  c->next = d;
  d->next = NULL;
  // slow-fast algorithm
  Node* slow = head;
  Node* fast = head;
  bool hasCycle = false;
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast){
      hasCycle = true;
      break;
    }
  }
  if(hasCycle == true){
    cout << "Cycle detected" << endl;
  }else{
    cout << "No Cycle detected" << endl;
  }
  return 0;
}