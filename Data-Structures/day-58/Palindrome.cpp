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
void insertAtTail(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}


bool isPalindrome(Node *head)
{
  if (head == NULL) return true;
  Node *l = head, *r = head;
  while (r->next != NULL)
  {
    r = r->next;
  }
  while (l != r && l->prev != r)
  {
    if (l->val != r->val)
      return false;
    l = l->next;
    r = r->prev;
  }
  return true;
}
int main()
{
  // Write your code here
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
  if(isPalindrome(head)){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}
