/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node* left, Node* right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
*/

bool isParentSum(Node *root)
{
    // Base case: If the node is a leaf or null, return true
    if (root == nullptr || (root->left == nullptr && root->right == nullptr))
        return true;

    int child = 0;

    // Calculate the sum of child nodes
    if (root->left)
        child += root->left->data;
    if (root->right)
        child += root->right->data;

    // Check if the sum of child nodes is equal to the root's data
    if (child != root->data)
        return false;

    // Recursively check the left and right subtrees
    bool leftSubtree = isParentSum(root->left);
    bool rightSubtree = isParentSum(root->right);

    // Return true if both left and right subtrees are parent-sum trees
    return leftSubtree && rightSubtree;
}
