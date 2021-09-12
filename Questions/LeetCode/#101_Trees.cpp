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
    // TreeNode* check(TreeNode* &temp){
    //     TreeNode *temp1;
    //     if(temp){
    //         isSymmetric(temp->left);
    //         isSymmetric(temp->right);
    //         temp1=temp->left;
    //         temp->left=temp->right;
    //         temp->right=temp1;
    //     }
    //     return temp;
    // }
    // bool isSameTree(TreeNode* p,TreeNode* q){
    //     if(p==NULL || q==NULL) return p==q;
    //     return (p->val==q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
    // }
//     void levelorder(TreeNode* root,vector<int> &v){
//         TreeNode* temp;
//         queue<TreeNode*> q;
//         if(!root) return;
//         q.push(root);
//         while(!q.empty()){
//             temp=q.pop();
//             v.push_back(temp->val);
//             if(temp->left) q.push(temp);
//             if(temp->right) q.push(temp);
//         }
        
//     }
    // bool helper(TreeNode* a,TreeNode *b){
    //     if(a==NULL && b==NULL) return true;
    //     if(a!=NULL && b!=NULL) return (a->val==b->val && a->left==b->right && a->right==b->left);
    //     //return false;
    // }
    bool isSymmetric(TreeNode* root) {
        //if(root==NULL) return true;
        // TreeNode* temp=root->left;
        // check(temp);
        // return isSameTree(temp,root->right);
        // TreeNode* temp=root->left;
        // TreeNode* temp1=root->right;
        // return helper(temp,temp1);
//         queue<TreeNode*> q;
//         q.push(root);
//         int a=2;
//         while(!q.empty()){
//             TreeNode* temp=q.front();
            
//         }
        TreeNode *temp1,*temp2;
        if(!root) return true;
        queue<TreeNode*> q1,q2;
        q1.push(root->left);
        q2.push(root->right);
        while(!q1.empty() && !q2.empty()){
            temp1=q1.front();
            q1.pop();
            temp2=q2.front();
            q2.pop();
            if(temp1==NULL && temp2==NULL) continue;
            if(temp1==NULL || temp2==NULL) return false;
            if(temp1->val !=temp2->val) return false;
            q1.push(temp1->left);
            q1.push(temp1->right);
            q2.push(temp2->right);
            q2.push(temp2->left);
         }
        return true;
    }
};