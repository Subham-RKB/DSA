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
    TreeNode* helper(vector<int>& nums,int s,int e){
        if(s>e){
            return NULL;
        }
        int h;
        int maxx=INT_MIN;
        for(int i=s;i<=e;i++){
            if(nums[i]>maxx){
                maxx=nums[i];
                h=i;
            }
        }
        TreeNode* root = new TreeNode(nums[h]);
        root->left = helper(nums,s,h-1);
        root->right = helper(nums,h+1,e);
        return root;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0) return NULL;
        return helper(nums,0,nums.size()-1);
    }
};