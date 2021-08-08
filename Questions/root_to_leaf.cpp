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
    vector<string> ans;
    void path(TreeNode* root,string s){
        if(!root){
            return ;
        }
        s+=to_string(root->val);
        if(!root->left && !root->right){
            ans.push_back(s);
            return ;
        }
        else{
            s+="->";
            path(root->left,s);
            path(root->right,s);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        path(root,s);
        return ans;
    }
};