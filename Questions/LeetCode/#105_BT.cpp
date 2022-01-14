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
    int p=0;
    TreeNode *helper(vector<int>& pre,vector<int>& in,int s,int e){
        if(s>e){
            return NULL;
        }
        TreeNode* node = new TreeNode(pre[p++]);
        cout<<node->val<<endl;
        if(s==e){
            return node;
        }
        int cut=0;
        for(int i=s;i<=e;i++){
            if(node->val == in[i]){
                cut=i;
            }
        }
        node->left=helper(pre,in,s,cut-1);
        node->right=helper(pre,in,cut+1,e);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode *root= helper(preorder,inorder,0,inorder.size()-1);
        return root;
    }
};