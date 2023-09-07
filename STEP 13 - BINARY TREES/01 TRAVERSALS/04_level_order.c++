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

vector<int> levelOrder(TreeNode<int> *root)
{
    vector<int> ans;
    if (root == nullptr) return ans;

    queue<TreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            TreeNode<int> *node = q.front();
            q.pop();

            if(node -> left != nullptr) q.push(node -> left);
            if(node -> right != nullptr) q.push(node -> right);
            ans.push_back(node -> data);
        }
    }

    return ans;
}
