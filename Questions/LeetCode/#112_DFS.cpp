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
    bool hasPathSum(TreeNode* root, int targetSum) {
        stack<int> s;
        if(root==NULL) return false;
        //if(root==NULL && targetSum==0) return true;
        stack<TreeNode*> q;
        q.push(root);
        s.push(targetSum-root->val);
        while(!q.empty()){
            TreeNode* temp=q.top();
            q.pop();
            int curr=s.top();
            s.pop();
            if(temp->left==NULL && temp->right==NULL && curr==0){
                    return true;
            }
            if(temp->left!=NULL) {q.push(temp->left);s.push(curr-temp->left->val);}
            if(temp->right!=NULL) {q.push(temp->right);s.push(curr-temp->right->val);}
        }
        return false;
    }
};