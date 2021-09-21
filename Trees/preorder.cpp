
class Solution {
    private:
    void dfs(TreeNode *node, vector<int> &preorder) {
        if(node == NULL) return; 
        
        preorder.push_back(node->val); 
        dfs(node->left, preorder); 
        dfs(node->right, preorder); 
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        dfs(root, preorder);
        return preorder; 
    }
};
