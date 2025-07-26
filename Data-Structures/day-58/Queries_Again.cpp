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

void insertAtHead(Node *&head, Node *&tail, int val)
{
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head->prev = newNode;
  head = newNode;
}

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

void insertAtAnyPos(Node *&head, Node *&tail, int idx, int val)
{
  Node *newNode = new Node(val);
  Node *tmp = head;
  for (int i = 0; i < idx - 1 && tmp != NULL; i++)
  {
    tmp = tmp->next;
  }
  if (tmp == NULL)
  {
    delete newNode;
    return;
  }
  newNode->next = tmp->next;
  if (tmp->next != NULL)
  {
    tmp->next->prev = newNode;
  }
  else
  {
    tail = newNode;
  }
  tmp->next = newNode;
  newNode->prev = tmp;
}

int listSize(Node *head)
{
  int cnt = 0;
  Node *tmp = head;
  while (tmp != NULL)
  {
    cnt++;
    tmp = tmp->next;
  }
  return cnt;
}

void printListForward(Node *head)
{
  cout << "L -> ";
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->next;
  }
  cout << endl;
}

void printListBackward(Node *tail)
{
  cout << "R -> ";
  Node *tmp = tail;
  while (tmp != NULL)
  {
    cout << tmp->val << " ";
    tmp = tmp->prev;
  }
  cout << endl;
}

int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int q;
  cin >> q;
  while (q--)
  {
    int idx, val;
    cin >> idx >> val;
    int sz = listSize(head);
    if (idx < 0 || idx > sz)
    {
      cout << "Invalid" << endl;
    }
    else if (idx == 0)
    {
      insertAtHead(head, tail, val);
      printListForward(head);
      printListBackward(tail);
    }
    else if (idx == sz)
    {
      insertAtTail(head, tail, val);
      printListForward(head);
      printListBackward(tail);
    }
    else
    {
      insertAtAnyPos(head, tail, idx, val);
      printListForward(head);
      printListBackward(tail);
    }
  }
  return 0;
}