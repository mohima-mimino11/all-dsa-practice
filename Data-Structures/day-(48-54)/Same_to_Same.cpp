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
int countSize(Node *&head)
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


int main()
{
  // Write your code here
  Node *head1 = NULL;
  Node *tail1 = NULL;
  Node *head2 = NULL;
  Node *tail2 = NULL;
  int val;
  while (cin >> val)
  {
    if (val == -1)
    {
      break;
    }
    insertAtTail(head1, tail1, val);
  }
  while (cin >> val)
  {
    if (val == -1)
    {
      break;
    }
    insertAtTail(head2, tail2, val);
  }
  int size1 = countSize(head1);
  int size2 = countSize(head2);

  if(size1 != size2){
    cout << "NO" << endl;
  }else{
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    int flag = 0;
    while(tmp1 != NULL && tmp2 != NULL){
      if(tmp1->val != tmp2->val){
        flag = 1;
        break;
      }
      tmp1 = tmp1->next;
      tmp2 = tmp2->next;
    }
    if(flag == 0){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
  return 0;
}
