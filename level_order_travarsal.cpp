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
    void levelOrder(TreeNode* root, vector<vector<int>>& result) {
        if (root == NULL) return;
        vector<TreeNode*> currentLevel;
        currentLevel.push_back(root);
        
        while (!currentLevel.empty()) {
            vector<int> levelValues;
            vector<TreeNode*> nextLevel;
            
            for (TreeNode* node : currentLevel) {
                levelValues.push_back(node->val);
                if (node->left) nextLevel.push_back(node->left);
                if (node->right) nextLevel.push_back(node->right);
            }
            
            result.push_back(levelValues);
            currentLevel = nextLevel;
        }
    }
};
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    
    Solution solution;
    vector<vector<int>> result;
    solution.levelOrder(root, result);
    
    cout << "Level Order Traversal: " << endl;
    for (const auto& level : result) {
        for (int val : level) {
            cout << val << " ";
        }
        cout << endl;
    }
    
    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;
    
    return 0;
}