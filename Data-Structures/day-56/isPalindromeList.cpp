#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node *prev;
  Node(int val)
  {
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
  if (head == NULL)
    return true;

  // Find the tail ptr.
  Node *left = head, *right = head;
  while (right->next != NULL)
  {
    right = right->next;
  }

  // Check if the doubly linked list is
  // a palindrome.
  while (left != right && left->prev != right)
  {

    // If char mismatch, return
    // false.
    if (left->val != right->val)
      return false;

    // Move the pointers
    left = left->next;
    right = right->prev;
  }

  return true;
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;

  int val;
  while (1)
  {
    cin >> val;
    if (val == -1)
    {
      break;
    }
    insertAtTail(head, tail, val);
  }
  if(isPalindrome(head)){
    cout << "YES";
  }else{
    cout << "NO";
  }
  return 0;
}