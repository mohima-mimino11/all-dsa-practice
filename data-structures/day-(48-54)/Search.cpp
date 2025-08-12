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

void insertAtTail(Node *&head, Node *&tail, long long int val)
{
  Node *newnode = new Node(val);
  if (head == NULL)
  {
    head = newnode;
    tail = newnode;
    return;
  }
  tail->next = newnode;
  tail = newnode;
}
void searchTargetVal(Node *&head, long long tar_val)
{
  int idx = 0;
  bool flag = false;

  Node *tmp = head;
  while (tmp != NULL)
  {
    // cout << tmp->val << " ";
    if (tmp->val == tar_val)
    {
      cout << idx << endl;
      flag = true;
      break;
    }
    tmp = tmp->next;
    idx++;
  }

  if (flag == false)
  {
    cout << -1 << endl;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    Node *head = NULL;
    Node *tail = NULL;
    long long int val;
    while (cin >> val)
    {
      if (val == -1)
      {
        break;
      }
      insertAtTail(head, tail, val);
    }

    long long int tar_val;
    cin >> tar_val;

    searchTargetVal(head, tar_val);
  }

  return 0;
}