/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int mx;
int maxHeight(TreeNode<int> *root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL) return 1;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    int d = l + r;
    mx = max(d,mx);
    return max(l,r) + 1;
}
int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    mx = 0;
    int height = maxHeight(root);
    return mx;
}
