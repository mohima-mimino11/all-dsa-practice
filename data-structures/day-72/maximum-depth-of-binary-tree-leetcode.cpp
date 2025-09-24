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
  int maxHeight(TreeNode *root)
  {
    if (root == NULL)
    {
      return 0;
    }
    if (root->left == NULL && root->right == NULL)
    {
      return 1;
    }
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
  }
  int maxDepth(TreeNode *root)
  {

    int height = maxHeight(root);
    return height;
  }
};