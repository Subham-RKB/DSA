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
    void helper(TreeNode* root,vector<int>& r1){
        if(root){
            helper(root->left,r1);
            r1.push_back(root->val);
            helper(root->right,r1);
        }
        return;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> r1;
        vector<int> r2;
        vector<int> ans;
        helper(root1,r1);
        helper(root2,r2);
        int i=0,j=0;
        while(i<r1.size() && j<r2.size()){
            if(r1[i]<r2[j]){
                ans.push_back(r1[i]);
                i++;
            }
            else{
                ans.push_back(r2[j]);
                j++;
            }
        }
        while(i<r1.size()){
            ans.push_back(r1[i]);
            i++;
        }
        while(j<r2.size()){
            ans.push_back(r2[j]);
            j++;
        }
        return ans;
    }
};