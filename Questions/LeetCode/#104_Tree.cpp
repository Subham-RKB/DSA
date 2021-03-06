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
    int maxDepth(TreeNode* root) {
        //TreeNode* p;
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            ++level;
            for(int i=0,n=q.size();i<n;++i){
                TreeNode* p=q.front();
                q.pop();
                if(p->left!=NULL) q.push(p->left);
                if(p->right!=NULL) q.push(p->right);
                        
            }
            
        }
        return level;
        
    }
};