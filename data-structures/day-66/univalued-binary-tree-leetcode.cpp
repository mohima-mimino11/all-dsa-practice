/** 
 * Problem:A binary tree is uni-valued if every node in the tree has the same value.
  Given the root of a binary tree, return true if the given tree is uni-valued, or false otherwise.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(NULL), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
  bool isUnivalTree(TreeNode *root)
  {
    // Base case: empty tree is univalued
    if (root == NULL)
    {
      return true;
    }

    // Check left subtree if it exists
    if (root->left != NULL)
    {
      if (root->left->val != root->val)
      {
        return false;
      }
      // Recursively check the left subtree
      if (!isUnivalTree(root->left))
      {
        return false;
      }
    }

    // Check right subtree if it exists
    if (root->right != NULL)
    {
      if (root->right->val != root->val)
      {
        return false;
      }
      // Recursively check the right subtree
      if (!isUnivalTree(root->right))
      {
        return false;
      }
    }

    return true;
  }
};