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
vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    if(root == nullptr) return ans;
    vector<int> left = postorderTraversal(root -> left);
    ans.insert(ans.end(),left.begin(), left.end());
    vector<int> right = postorderTraversal(root -> right);
    ans.insert(ans.end(),right.begin(), right.end());
    ans.push_back(root -> data);
    return ans;
}