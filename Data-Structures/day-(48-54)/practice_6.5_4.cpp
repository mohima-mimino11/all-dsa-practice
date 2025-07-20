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
    tail = newNode;
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

// void checkAscendingSortLinkedList(Node* &head){ // Time- O(N^2) or O(N*N)
//   int flag = 0;
//   for(Node* i = head; i->next != NULL; i= i->next){
//     for(Node* j = i->next; j != NULL; j = j->next){
//       if(i->val < j->val){
//         // swap(i->val, j->val);
//         flag = 1;
//       }
//     }
//   }
//   if(flag == 1){
//     cout << "YES";
//   }else{
//     cout << "NO";
//   }
// }

void checkAscendingSortLinkedList(Node *head)
{ // Time - O(N)
  if (head == NULL || head->next == NULL)
  {
    cout << "YES" << endl;
    return;
  }
  Node *current = head;
  while (current->next != NULL)
  {
    if (current->val > current->next->val)
    {
      cout << "NO" << endl;
      return;
    }
    current = current->next;
  }
  cout << "YES" << endl;
}
int main()
{
  Node *head = NULL;
  Node *tail = NULL;
  int val;
  while (cin >> val)
  { // Time complexity: O(N)
    // ;
    // if(val == -1){
    //   break;
    // }
    insertAtTail(head, tail, val);
  }

  checkAscendingSortLinkedList(head);

  // printLinkedList(head);
  // cout << "Tail " << tail->val << endl;
  return 0;
}