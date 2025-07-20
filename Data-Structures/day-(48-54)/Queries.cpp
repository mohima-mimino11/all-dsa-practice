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
void insertAtHead(Node *&head, Node *&tail, int val)
{ // Time complexity - O(1)
  Node *newNode = new Node(val);
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

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


void insertAtAnyPostion(Node *&head, int idx, int val)
{ // Time complexity - O(N)
  Node *newNode = new Node(val);
  Node *tmp = head;
  for (int i = 0; i < idx - 1; i++)
  {
    tmp = tmp->next;
    if (tmp == NULL)
    {
      return;
    }
  }
  // tmp is at idx-1 now
  newNode->next = tmp->next;
  tmp->next = newNode;
}

int countSize(Node *head) // Note: Passing by value is sufficient here.
{
  int cnt = 0;
  Node *tmp = head;
  while (tmp != NULL)
  {
    tmp = tmp->next;
    cnt++;
  }
  return cnt;
}

void deleteAtAnyPosition(Node *&head, Node* &tail, int idx)
{ // Time complexity: O(N)

  if (head == NULL || idx < 0)
    return;
  if (idx == 0)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    if (head == NULL)
      tail = NULL;
    return;
  }
  Node *tmp = head;
  for (int i = 0; i < idx - 1 && tmp != NULL; i++)
  {
    tmp = tmp->next;
  }
  if (tmp == NULL || tmp->next == NULL)
    return;
  Node *toDelete = tmp->next;
  tmp->next = toDelete->next;
  if (toDelete == tail)
    tail = tmp;
  delete toDelete;
}


void printLinkedList(Node *head)
{
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
  
  Node *head = NULL;
  Node *tail = NULL;

  int Q;
  cin >> Q; 

  for (int i = 0; i < Q; i++)
  {
    int x, v;
    cin >> x >> v; 

    
    if (x == 0)
    {
      insertAtHead(head, tail, v);
    }
    else if (x == 1)
    {
      insertAtTail(head, tail, v);
    }
    else if (x == 2)
    {
      
      int size = countSize(head);
      if (v < size)
      {
        deleteAtAnyPosition(head,tail, v); 
      }
    }

    
    printLinkedList(head);
  }

  return 0;
}