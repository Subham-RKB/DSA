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
    unordered_map<int,int> m;
    int helper(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int k = helper(root->left)+helper(root->right);
        m[k+root->val]++;
        root->val=k+root->val;
        return root->val;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> ans;
        helper(root);
        int maxx=INT_MIN;
        for(auto& i:m){
            if(i.second>maxx){
                maxx=i.second;
            }
        }
        for(auto& i:m){
            if(i.second==maxx){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};