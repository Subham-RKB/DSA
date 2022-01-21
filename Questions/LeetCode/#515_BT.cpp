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
    vector<int> largestValues(TreeNode* root) {
        vector<int> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        queue<TreeNode*> p;
        q.push(root);
        while(!q.empty()){
            TreeNode* ok= q.front();
            q.pop();
            if(ok->left) p.push(ok->left);
            if(ok->right) p.push(ok->right);
            int k=ok->val;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* ok1=q.front();
                q.pop();
                if(ok1->left) p.push(ok1->left);
                if(ok1->right) p.push(ok1->right);
                if(ok1->val>k){
                    k=ok1->val;
                }
            }
            ans.push_back(k);
            swap(p,q);
        }
        return ans;
       
    }
};
int level;
    int k=-1;
    void helper(TreeNode* root,int level,vector<int>& v){
        if(root==NULL){
            if(level>k){
                k=level;
            }
            return;
        }
        if(root->val>=v[level]){
            v[level]=root->val;
        }
        helper(root->left,level+1,v);
        helper(root->right,level+1,v);
    }
vector<int> v(10001,INT_MIN);
        helper(root,0,v);
        return vector<int> (v.begin(),v.begin()+k);
 vector<int> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        queue<TreeNode*> p;
        q.push(root);
        while(!q.empty()){
            TreeNode* ok= q.front();
            q.pop();
            if(ok->left) p.push(ok->left);
            if(ok->right) p.push(ok->right);
            int k=ok->val;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* ok1=q.front();
                q.pop();
                if(ok1->left) p.push(ok1->left);
                if(ok1->right) p.push(ok1->right);
                if(ok1->val>k){
                    k=ok1->val;
                }
            }
            ans.push_back(k);
            swap(p,q);
        }
        return ans;