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
void insertAtTail(Node* &head, Node* &tail, long long int val){
  Node* newNode = new Node(val);
  if(head == NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}

void printDifference(Node* &head){ // time- O(N)
  if(head == NULL){
    cout << "0" << endl;
    return;
  }
  Node* tmp = head;
  long long int maxVal = INT_MIN;
  long long int minVal = INT_MAX;
  while(tmp != NULL){
    maxVal = max((long long int)tmp->val, maxVal); // Casting to avoid overflow
    minVal = min((long long int)tmp->val, minVal);
    tmp = tmp->next;
  }
  cout << (maxVal - minVal) << endl;
}
int main()
{
  // Write your code here
  Node* head = NULL;
  Node* tail =  NULL;
  long long int val;
  while(1){
    cin >> val;
    if(val == -1){
      break;
    }
    insertAtTail(head, tail, val);
  }
  printDifference(head);
  return 0;
}
