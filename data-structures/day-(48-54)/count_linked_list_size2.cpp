#include <bits/stdc++.h>
using namespace std;

int sz = 0;

class Node
{
public:
  int data;   // kon type er data
  Node *next; // tar next node er address

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

void print_linked_list(Node *head)
{

  Node *temp = head; // initially head store thakbe

  while (temp != NULL)
  {
    cout << temp->data << endl;
    temp = temp->next;
  }
}



void insert_at_tail(Node *&head, Node *&tail, int val) // o(1)
{

  // 1.notun node create kora
  Node *new_node = new Node(val);
  sz++;

  // jodi eita prothom node hoi

  if (head == NULL)
  {
    head = new_node;
    tail = new_node;
    return;
  }

  // 2. connection

  tail->next = new_node;

  // 3. tail change korte hobe

  tail = new_node;
}

int size_of_list(Node *head)
{

  return sz;
}



int main()
{

  Node *head = NULL;
  Node *tail = NULL;
  int x;
  while (cin >> x)
  {
    insert_at_tail(head, tail, x);
  }


  cout << size_of_list(head) << endl;
  print_linked_list(head);
}