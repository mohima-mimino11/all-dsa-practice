#include <bits/stdc++.h>
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
  //  Write your code here.
  vector<int> result;
  if (root == NULL)
  {
    return result;
  }

  queue<BinaryTreeNode<int> *> q;
  q.push(root);

  while (!q.empty())
  {
    BinaryTreeNode<int> *current = q.front();
    q.pop();

    // Add the current node's value to the result
    result.push_back(current->val);

    // Push left child to queue if it exists
    if (current->left)
    {
      q.push(current->left);
    }
    // Push right child to queue if it exists
    if (current->right)
    {
      q.push(current->right);
    }
  }

  return result;
}