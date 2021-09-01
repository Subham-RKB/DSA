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
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int k=0;
        while(!q.empty()){
            k++;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode *p=q.front();
                q.pop();
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
                if(p->left==NULL && p->right==NULL) return k;
            }
        }
        return -1;
            
    }
};