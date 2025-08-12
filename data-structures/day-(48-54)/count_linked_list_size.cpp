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
{
  // Time complexity - O(1)
  Node *newNode = new Node(val);
  // edge case of linkedlist being empty
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  tail->next = newNode;
  tail = newNode;
}
void printLinkedList(Node *head)
{
  Node *tmp = head;
  while (tmp != NULL)
  {
    cout << tmp->val << endl;
    tmp = tmp->next;
  }
}
int getLinkedListSize(Node *head)
{
  int count = 0;
  Node *current = head;
  while (current != nullptr)
  {
    count++;
    current = current->next;
  }
  return count;
}
int main()
{
  Node *head = new Node(10);
  Node *a = new Node(20);
  Node *tail = new Node(30);

  head->next = a;
  a->next = tail;

  insertAtTail(head, tail, 70);
  insertAtTail(head, tail, 90);
  insertAtTail(head, tail, 100);
  printLinkedList(head);
  cout << "Tail " << tail->val << endl;
  cout << "list size is " << getLinkedListSize(head) << endl;
  return 0;
}