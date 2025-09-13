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
  queue<Node*> q;
  Node *root;
  if(val == -1) root = NULL;
  else root = new Node(val);
  if(root) q.push(root);
  while(!q.empty()){
    Node *f = q.front();
    q.pop();

    int l, r;
    cin >> l >> r;
    Node *leftNode, *rightNode;
    if(l == -1) leftNode = NULL;
    else leftNode = new Node(l);
    if(r == -1) rightNode = NULL;
    else rightNode = new Node(r);

    f->left = leftNode;
    f->right = rightNode;
    if(f->left) q.push(f->left);
    if(f->right) q.push(f->right);
  }
  return root; 
}
void levelOrder(Node *root){
  if(root == NULL) return;
  queue<Node*> q;
  if(root) q.push(root);
  while(!q.empty()){
    Node* f = q.front();
    q.pop();

    cout << f->val << " ";

    if(f->left) q.push(f->left);
    if(f->right) q.push(f->right);
  }
}
void insert(Node* &root, int val){
  if(root == NULL) root = new Node(val);
  if(root->val > val){
    if(root->left == NULL) root->left = new Node(val);
    else insert(root->left, val);
  }else{
    if(root->right == NULL) root->right = new Node(val);
    else insert(root->right, val);
  }
}
int main(){
  Node *root = inputTree();
  int val;
  cin >> val;
  insert(root, val);
  levelOrder(root);
  return 0;
}