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

Node *inputTree()
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
    Node *f = q.front();
    q.pop();
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
    f->left = leftNode;
    f->right = rightNode;
    if (f->left)
      q.push(f->left);
    if (f->right)
      q.push(f->right);
  }
  return root;
}

vector<int> getLeftPath(Node *node)
{
  vector<int> path;
  Node *cur = node;
  while (cur)
  {
    path.push_back(cur->val);
    if (cur->left)
      cur = cur->left;
    else if (cur->right)
      cur = cur->right;
    else
      break;
  }
  return path;
}

vector<int> getRightPath(Node *node)
{
  vector<int> path;
  Node *cur = node;
  while (cur)
  {
    path.push_back(cur->val);
    if (cur->right)
      cur = cur->right;
    else if (cur->left)
      cur = cur->left;
    else
      break;
  }
  return path;
}

int main()
{
  Node *root = inputTree();
  if (root == NULL)
    return 0;

  vector<int> leftP = getLeftPath(root);
  vector<int> rightP = getRightPath(root);

  vector<int> result;
  if (!leftP.empty() && !rightP.empty() && leftP.back() == rightP.back())
  {
    if (root->left != NULL)
    {
      reverse(leftP.begin(), leftP.end());
      result = leftP;
    }
    else
    {
      result = leftP;
    }
  }
  else
  {
    if (!leftP.empty())
    {
      reverse(leftP.begin(), leftP.end());
      for (int v : leftP)
        result.push_back(v);
    }
    if (!rightP.empty())
    {
      for (size_t i = 1; i < rightP.size(); ++i)
        result.push_back(rightP[i]);
    }
  }

  for (size_t i = 0; i < result.size(); ++i)
  {
    cout << result[i] << " ";
  }

  return 0;
}