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

vector<int> preOrder(TreeNode<int> * root){
    vector<int> ans;
    if(root == nullptr) return ans;
    ans.push_back(root -> data);
    vector<int> left = preOrder(root -> left);
    vector<int> right = preOrder(root -> right);
    ans.insert(ans.end(),left.begin(), left.end());
    ans.insert(ans.end(),right.begin(), right.end());
    return ans;
}

// Leetcode
/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<int> preorderTraversal(TreeNode *root)
        {
            vector<int> ans;
            if (root == nullptr) return ans;
            ans.push_back(root->val);
            vector<int> left = preorderTraversal(root->left);
            vector<int> right = preorderTraversal(root->right);
            ans.insert(ans.end(), left.begin(), left.end());
            ans.insert(ans.end(), right.begin(), right.end());
            return ans;
        }
};