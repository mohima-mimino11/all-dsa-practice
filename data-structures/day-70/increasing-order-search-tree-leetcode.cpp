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
  void inOrder(TreeNode *root)
  {
    if (root == NULL)
      return;
    inOrder(root->left);
    ans.push_back(root->val);
    inOrder(root->right);
  }

  TreeNode *makeTree()
  {
    TreeNode *root = new TreeNode(ans[0]);
    TreeNode *temp = root;
    for (int i = 1; i < ans.size(); i++)
    {
      TreeNode *right = new TreeNode(ans[i]);
      temp->right = right;
      temp = temp->right;
    }
    return root;
  }
  TreeNode *increasingBST(TreeNode *root)
  {
    inOrder(root);
    return makeTree();
  }
};