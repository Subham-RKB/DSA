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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        vector<int> v;
        queue<TreeNode*> p;
        while(!q.empty()){
            TreeNode* temp1=q.front();
            q.pop();
            v.push_back(temp1->val);
            if(temp1->left){
                p.push(temp1->left);
            }
            if(temp1->right){
                p.push(temp1->right);
            }
            if(q.empty()){
                q.swap(p);
                ans.push_back(v);
                v.clear();
            }
        }
        return ans;
    } 
};