/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void solve(TreeNode*root, vector<int>&In, vector<int>& pre, vector<int>& post){
    if(root == NULL) return;
    pre.push_back(root->data);
    solve(root->left, In, pre, post);
    In.push_back(root->data);
    solve(root->right, In, pre, post);
    post.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> In, pre, post;
    solve(root, In, pre, post);
    ans.push_back(In);
    ans.push_back(pre);
    ans.push_back(post);