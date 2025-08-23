#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
    int val;
    Node* next;
  Node(int val){
    this->val = val;
    this->next = NULL;
  }
};
class myStack{
  public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val){
      Node* newNode = new Node(val);
      if(head == NULL){
        head = newNode;
        tail = newNode;
      }
      tail->next = newNode;
      tail = newNode;
      sz++;
    }
    int top(){
      return tail->val;
    }
    int size(){
      return sz; 
    }
    bool empty(){
      return head == NULL;
    }
};
int main(){
  myStack st, st2;
  int m, n;
  cin >> m;
  for(int i = 0; i < m; i++){
    int x;
    cin >> x;
    st.push(x);
  }
  cin >> n;
  for(int i = 0; i < n; i++){
    int x;
    cin >> x;
    st2.push(x);
  }
  if(st.top() == st2.top()){
    cout << "YES";
  }else{
    cout << "NO";
  }
  
  return 0;
}