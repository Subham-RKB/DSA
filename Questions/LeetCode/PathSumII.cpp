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
    void preorder(TreeNode *root,vector<int> v,int t,vector<vector<int>> &ans){
        if(root==NULL) return;
        v.push_back(root->val);
        int total=accumulate(v.begin(),v.end(),0);
        if(root->left==NULL && root->right==NULL){
            if(total==t){
                ans.push_back(v);
            }
        }
        preorder(root->left,v,t,ans);
        preorder(root->right,v,t,ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> v;
        preorder(root,v,targetSum,ans);
        return ans;
    }
};