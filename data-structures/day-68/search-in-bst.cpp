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
bool nodeSearch(Node *root, int val){
  if(root ==  NULL) return false;
  if(root->val == val) return true;
  if(root->val > val) return nodeSearch(root->left, val);
  else return nodeSearch(root->right, val);
}
int main(){
  Node *root = inputTree();
  int val;
  cin >> val;
  if(nodeSearch(root,val)) cout << "Found\n";
  else cout << "Not Found\n";
  return 0;
}