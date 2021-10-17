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
    int ans=0;
    void helper(TreeNode* curr,int sum,int target,unordered_map<int,int>&m){
        if(curr==NULL) return;
        sum+=curr->val;
        if(m.find(sum-target)!=m.end()){
            ans+=m[sum-target];
        }
        m[sum]++;
        helper(curr->left,sum,target,m);
        helper(curr->right,sum,target,m);
        m[sum]--;
        return;
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        unordered_map<int,int> m;
        m[0]++;
        helper(root,0,targetSum,m);
        return ans;
    }
};