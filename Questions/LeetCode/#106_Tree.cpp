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
    TreeNode *Tree(vector<int>&in,int s_in,int e_in,vector<int>&po,int s_po,int e_po){
        if(s_in>e_in || s_po>e_po){
            return NULL;
        }
        TreeNode *node=new TreeNode(po[e_po]);
        int br=s_in;
        while(node->val!=in[br]) br++;
        node->left=Tree(in,s_in,br-1,po,s_po,s_po+br-s_in-1);
        node->right=Tree(in,br+1,e_in,po,s_po+br-s_in,e_po-1);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return Tree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
};