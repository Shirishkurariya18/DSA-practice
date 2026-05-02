#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& result) {
        if (root == NULL) return;
        inorder(root->left, result);
        result.push_back(root->val);
        inorder(root->right, result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }
};
int main() {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    
    Solution solution;
    vector<int> result = solution.inorderTraversal(root);
    
    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    
    // Clean up memory
    delete root->right->left;
    delete root->right;
    delete root;
    
    return 0;
}