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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*> q;
        queue<TreeNode*> p;
        q.push(root);
        vector<int> v;
        while(!q.empty()){
            TreeNode* r = q.front();
            q.pop();
            v.push_back(r->val);
            if(r->left){
                p.push(r->left);
            }
            if(r->right){
                p.push(r->right);
            }
            if(q.empty()){
                swap(p,q);
                ans.push_back(v[v.size()-1]);
                v.clear();
            }
        }
        return ans;
    }
};