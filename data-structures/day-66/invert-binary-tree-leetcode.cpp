/** 
 * Problem:Given the root of a binary tree, invert the tree, and return its root.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
  TreeNode *invertTree(TreeNode *root)
  {
    if (root == NULL)
    {
      return 0;
    }
    queue<TreeNode *> q;
    if (root)
      q.push(root);
    while (!q.empty())
    {
      TreeNode *p = q.front();
      q.pop();

      // swappiing left and rigth children
      swap(p->left, p->right);
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
};