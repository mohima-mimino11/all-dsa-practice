#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
  int val;
  Node *left;
  Node *right;
  Node(int val)
  {
    this->val = val;
    this->left = NULL;
    this->right = NULL;
  }
};

Node* inputTree()
{
  int val;
  cin >> val;
  Node *root;
  if (val == -1)
    root = NULL;
  else
    root = new Node(val);
  queue<Node *> q;
  if (root)
    q.push(root);
  while (!q.empty())
  {
    // 1. take a node out of queue
    Node *p = q.front();
    q.pop();
    // 2.work with that node
    int l, r;
    cin >> l >> r;
    Node *leftNode, *rightNode;
    if (l == -1)
      leftNode = NULL;
    else
      leftNode = new Node(l);
    if (r == -1)
      rightNode = NULL;
    else
      rightNode = new Node(r);

    p->left = leftNode;
    p->right = rightNode;
    // 3. push the children of the node that was taken out to the queue
    if (p->left)
    {
      q.push(p->left);
    }
    if (p->right)
    {
      q.push(p->right);
    }
  }
  return root;
}

void levelOrder(Node *root)
{
  if (root == NULL)
  {
    cout << "No Tree";
    return;
  }
  queue<Node*> q;
  q.push(root);
  while (!q.empty())
  {
    // 1. take a node out of queue
    Node *f = q.front();
    q.pop();
    // 2.work with that node
    cout << f->val << " ";
    // 3. push the children of the node that was taken out to the queue
    if(f->left){
      q.push(f->left);
    }
    if(f->right){
      q.push(f->right);
    }
  }
}
int main()
{
  Node* root = inputTree();
  levelOrder(root);
  return 0;
}