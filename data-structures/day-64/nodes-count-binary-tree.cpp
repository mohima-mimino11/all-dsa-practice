#include <bits/stdc++.h>
using namespace std;
class Node{
  public:
    int val;
    Node* left;
    Node* right;
  Node(int val){
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};
Node* inputTree(){
  int val;
  cin >> val;
  Node* root;
  if(val == -1) root = NULL;
  else root = new Node(val);
  queue<Node*> q;
  if(root) q.push(root);
  while(!q.empty()){
    Node* p = q.front();
    q.pop();
    int l, r;
    cin >> l >> r;
    Node *leftNode,*rightNode;
    if(l == -1) leftNode = NULL;
    else leftNode = new Node(l);
    if(r == -1) rightNode = NULL;
    else rightNode = new Node(r);

    p->left = leftNode;
    p->right = rightNode;
    if(p->left){
      q.push(p->left);
    }
    if(p->right){
      q.push(p->right);
    }
  }
  return root;
}
int countNodes(Node* root){
  if(root == NULL){
    return 0;
  }
  int l = countNodes(root->left);
  int r = countNodes(root->right);
  return l+r+1;
}
int main(){
  Node* root = inputTree();
  cout << countNodes(root) << endl;
  return 0;
}