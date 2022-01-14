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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<TreeNode*> q;
        queue<TreeNode*> p;
        vector<int> v;
        q.push(root);
        while(!q.empty()){
            TreeNode* ok = q.front();
            q.pop();
            v.push_back(ok->val);
            if(ok->left){
                p.push(ok->left);
            }
            if(ok->right){
                p.push(ok->right);
            }
            if(q.empty()){
                swap(p,q);
                ans.push_back(v);
                v.clear();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};