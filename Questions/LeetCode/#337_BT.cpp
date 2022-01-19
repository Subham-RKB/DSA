/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,int> m;
    int rob(TreeNode* root) {
        if(root==NULL) return 0;
        if(m.find(root)!=m.end()) return m[root];
        int include=0;
        int exclude = 0;
        include+=root->val;
        if(root->left){
            include+=rob(root->left->left);
            include+=rob(root->left->right);
        }
        if(root->right){
            include+=rob(root->right->left);
            include+=rob(root->right->right);
        }
        exclude+=rob(root->left);
        exclude+=rob(root->right);
        return m[root]=max(exclude,include);
    }
};