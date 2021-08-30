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
    //unordered_map<int,int> m;
    vector<int> ans;
    int maxF=0,cF=0,p=INT_MIN;
    
    void findModes(TreeNode* root){
        if(root==NULL) return;
        findMode(root->left);
        if(p==root->val) cF++;
        else cF=1;
        if(cF>maxF){
            ans.clear();
            maxF=cF;
            ans.push_back(root->val);
        }
        else if(cF==maxF){
            ans.push_back(root->val);
        }
        p=root->val;
        findMode(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        findModes(root);
        return ans;
    }
};