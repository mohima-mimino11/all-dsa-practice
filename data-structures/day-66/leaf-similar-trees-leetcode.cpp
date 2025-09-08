/**
 * Problem:Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.
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
  vector<int> ans;
  vector<int> ans2;

  void preOrder(TreeNode *root, vector<int> &leaves)
  {
    if (root == NULL)
      return;
    if (root->left == NULL && root->right == NULL)
    {
      leaves.push_back(root->val);
    }
    preOrder(root->left, leaves);
    preOrder(root->right, leaves);
  }
  bool leafSimilar(TreeNode *root1, TreeNode *root2)
  {
    preOrder(root1, ans);
    preOrder(root2, ans2);
    if (ans == ans2)
    {
      return true;
    }
    return false;
  }
};