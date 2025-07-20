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
void printMidValue(Node *&head) // O(N)
{
  if (head == NULL)
  {
    return;
  }
  Node *slow = head;
  Node *fast = head;
  // Move fast to the end, slow to the middle
  while (fast != NULL && fast->next != NULL) // O(N)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  // For even length, print the previous and current middle
  if (fast == NULL && slow != head)
  {
    Node *prevSlow = head;
    while (prevSlow->next != slow)
    {
      prevSlow = prevSlow->next;
    }
    cout << prevSlow->val << " " << slow->val << endl;
  }
  else
  {
    // Odd length or single node, print only the middle
    cout << slow->val << endl;
  }
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int val;
  while (cin >> val)
  {
    insertAtTail(head, tail, val);
  }
  printMidValue(head);
  return 0;
}