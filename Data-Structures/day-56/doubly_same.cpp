#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
    int val;
    Node* next;
    Node* prev;
  Node(int val){
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
  }
};

void insertAtTail(Node* &head, Node* &tail, int val){
  Node* newNode = new Node(val);
  if(head == NULL){
    head = newNode;
    tail = newNode;
    return;
  }
  tail->next = newNode;
  newNode->prev = tail;
  tail = newNode;
}

int getListSize(Node* head){
  int cnt = 0;
  // if(head == NULL){
  //   return;
  // }
  Node* tmp = head;
  while(tmp != NULL){
    tmp = tmp->next;
    cnt++;
  }
  return cnt;
}
int main(){
  Node* head1 = NULL;
  Node* tail1 = NULL;
  Node* head2 = NULL;
  Node* tail2 = NULL;
  int val;
  while(1){
    cin >> val;
    if(val == -1){
      break;
    }
    insertAtTail(head1, tail1, val);
  }
  while(1){
    cin >> val;
    if(val == -1){
      break;
    }
    insertAtTail(head2, tail2, val);
  }
  int size1 = getListSize(head1);
  int size2 = getListSize(head2);
  if(size1 != size2){
    cout << "NO";
  }else{
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    bool flag = true;
    while(tmp1 != NULL && tmp2 != NULL){
      if(tmp1->val != tmp2->val){
        flag = false;
        break;
      }
      tmp1 = tmp1->next;
      tmp2 = tmp2->next;
    }
    if(flag == true){
      cout << "YES";
    }else{
      cout << "NO";
    }
  }
  return 0;
}