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
    int helper(TreeNode* root,int &a,int &ans ){
        if(root->left!=NULL) helper(root->left,a,ans);
        if(a>=0) ans=min(ans,root->val-a);
        a=root->val;
        if(root->right!=NULL) helper(root->right,a,ans);
        return ans;
    }
    int getMinimumDifference(TreeNode* root) {
        int ans=INT_MAX,a=-1;
        return helper(root,a,ans);
    }
};