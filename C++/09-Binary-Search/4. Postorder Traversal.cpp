// Postorder Traversal of a Binary Tree
// Left → Right → Root

#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


void postorderTraversal(TreeNode* root, vector<int>& result) {
    if (root == nullptr) {
        return;
    }

    postorderTraversal(root->left, result);  
    postorderTraversal(root->right, result); 
    result.push_back(root->val);
}


int main() {


    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> result;
    postorderTraversal(root, result);

    cout << "Postorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;


    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}