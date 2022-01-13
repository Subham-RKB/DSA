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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> v;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        queue<TreeNode*> p;
        int level=1;
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            v.push_back(temp->val);
            if(temp->left){
                p.push(temp->left);
            }
            if(temp->right){
                p.push(temp->right);
            }
            if(q.empty()){
                swap(p,q);
                if(level%2==0){
                    reverse(v.begin(),v.end());
                    ans.push_back(v);
                }
                else{
                   ans.push_back(v); 
                }
                level++;
                v.clear();
            }
        }
        return ans;
    }
};