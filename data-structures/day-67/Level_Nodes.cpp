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
  {
    root = NULL;
  }
  else
  {
    root = new Node(val);
  }
  queue<Node *> q;
  if (root)
    q.push(root);
  while (!q.empty())
  {
    Node *p = q.front();
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
    p->left = leftNode;
    p->right = rightNode;
    if (p->left)
      q.push(p->left);
    if (p->right)
      q.push(p->right);
  }
  return root;
}

void printLevelNodes(Node *root, int targetLevel)
{
  if (root == NULL)
  {
    cout << "Invalid" << endl;
    return;
  }
  queue<Node *> q;
  q.push(root);
  int currentLevel = 0;
  bool levelFound = false;

  while (!q.empty())
  {
    int levelSize = q.size();
    if (currentLevel == targetLevel)
    {
      levelFound = true;
      vector<int> nodesAtLevel;
      for (int i = 0; i < levelSize; i++)
      {
        Node *current = q.front();
        q.pop();
        nodesAtLevel.push_back(current->val);
        if (current->left)
          q.push(current->left);
        if (current->right)
          q.push(current->right);
      }
      for (int i = 0; i < nodesAtLevel.size(); i++)
      {
        cout << nodesAtLevel[i];
        if (i < nodesAtLevel.size() - 1)
          cout << " ";
      }
      cout << endl;
      return;
    }
    for (int i = 0; i < levelSize; i++)
    {
      Node *current = q.front();
      q.pop();
      if (current->left)
        q.push(current->left);
      if (current->right)
        q.push(current->right);
    }
    currentLevel++;
  }
  if (!levelFound)
  {
    cout << "Invalid" << endl;
  }
}

int main()
{
  Node *root = inputTree();
  int targetLevel;
  cin >> targetLevel;
  printLevelNodes(root, targetLevel);
  return 0;
}