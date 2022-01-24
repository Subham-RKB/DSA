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
    int ans = INT_MIN;
    int helper(TreeNode* root){
        if(!root){
            return 0;
        }
        int l=helper(root->left);
        int r=helper(root->right);
        if(root->left!=NULL && root->val==root->left->val){
            l=l+1;
        }
        else{
            l=0;
        }
        if(root->right!=NULL && root->right->val==root->val){
            r=r+1;
        }
        else{
            r=0;
        }
        ans=max(ans,r+l);
        return max(l,r);
    }
    int longestUnivaluePath(TreeNode* root) {
        if(!root) return 0;
        helper(root);
        return ans;
    }
};