#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};
void insertAtTail(Node *&head, Node *&tail, int val)
{ // Time complexity - O(1)
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}

void removeDuplicates(Node *&head) 
{ // time - O(N*N)
  Node *i = head;
  while (i != NULL)
  {
    Node *j = i;
    while (j->next != NULL)
    {
      if (i->val == j->next->val)
      {
        Node *deleteNode = j->next;
        j->next = j->next->next;
        delete deleteNode;
      }
      else
      {
        j = j->next;
      }
    }
    i = i->next;
  }
}
void printLinkedList(Node *head)
{ // Time - O(N)
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

int main()
{
  // Write your code here
  Node *head = NULL;
  Node *tail = NULL;
  int val;
  while (cin >> val)
  {
    if (val == -1)
    {
      break;
    }
    insertAtTail(head, tail, val);
  }
  removeDuplicates(head);
  printLinkedList(head);
  return 0;
}
