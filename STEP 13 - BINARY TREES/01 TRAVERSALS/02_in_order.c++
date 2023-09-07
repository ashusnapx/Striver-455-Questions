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
vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    if(root == nullptr) return ans;
    vector<int> left = getInOrderTraversal(root -> left);
    ans.insert(ans.end(),left.begin(), left.end());
    ans.push_back(root -> data);
    vector<int> right = getInOrderTraversal(root -> right);
    ans.insert(ans.end(),right.begin(), right.end());
    return ans;
}