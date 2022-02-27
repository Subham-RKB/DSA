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
    
    // void helper(TreeNode* root,int depth,vector<int>& v){
    //     if(root==NULL) {v[depth+1]+=2;return;}
    //     if(root->left==NULL && root->right!=NULL) v[depth+1]++;
    //     v[depth]++;
    //     helper(root->left,depth+1,v);
    //     helper(root->right,depth+1,v);
    // }
    // void helper(TreeNode* root,int depth,vector<int>& v,int c)
    // {
    //     if(root==NULL){
    //         return;
    //     }
    //     v[depth]+=c;
    //     helper(root->left,depth+1,v,1);
    //     helper(root->right,depth+1,v,2);
    // }
//     int maxDepth(TreeNode* node)
//     {
//         if (node == NULL)
//             return -1;
//         else
//         {
//             /* compute the depth of each subtree */
//             int lDepth = maxDepth(node->left);
//             int rDepth = maxDepth(node->right);

//             /* use the larger one */
//             if (lDepth > rDepth)
//                 return(lDepth + 1);
//             else return(rDepth + 1);
//         }
//     }
 
//     int coount(vector<TreeNode*> v){
//         int c =0;
//         int i=0;
//         while(v[i]==NULL && i<v.size()){
//             i++;
//         }
//         i++;
//         c=1;
//         while(v[i]==NULL && i<v.size()){
//             c++;
//             i++;
//         }
//         return c;
//     }
    void dfs(TreeNode* root,unsigned long long int id,unsigned long long int depth,vector<int>& left,unsigned long long int& width)
    {
        if(!root)return;
        if(depth>=left.size()) left.push_back(id);
        width = max(width,id+1-left[depth]);
        dfs(root->left, id * 2, depth + 1, left, width);
        dfs(root->right, id * 2 + 1, depth + 1, left, width);
    }
    int widthOfBinaryTree(TreeNode* root) {
        // vector<int> left;
        // unsigned long long int width=0;
        // dfs(root,1,0,left,width);
        // return width;
        // if(root==NULL) return 0;
        // queue<TreeNode*> q;
        // vector<TreeNode*> v;
        // queue<TreeNode*> p;
        // q.push(root);
        // int ans=INT_MIN;
        // int count = maxDepth(root)-1;
        // while(!q.empty() && count--){
        //     TreeNode* y = q.front();
        //     q.pop();
        //     int k = coount(v);
        //     ans=max(ans,k);
        //     v.clear();
        //     if(y==NULL){
        //         v.push_back(NULL);
        //         v.push_back(NULL);
        //         q.push(NULL);
        //         q.push(NULL);
        //     }
        //     else{
        //     if(y->left)
        //     {
        //         p.push(y->left);
        //         v.push_back(y);
        //     }
        //     else{
        //         p.push(NULL);
        //         v.push_back(NULL);
        //     }
        //     if(y->right)
        //     {
        //         p.push(y->right);
        //         v.push_back(y);
        //     }
        //     else{
        //         p.push(NULL);
        //         v.push_back(NULL);
        //     }
        //     }
        //     if(q.empty())
        //     {
        //         swap(p,q);
        //     }
        // }
        // return ans;   
    long result=1;
	queue<pair<TreeNode*,long>> q;
	q.push({root,0});
	while (!q.empty())
	{
		int s=q.size(); 
		long current=0;
		for (int i=0; i<s; i++) 
		{
			pair<TreeNode*,long> p=q.front();
			q.pop();
			if (i==0) current=p.second;
			else result=max(result,p.second-current+1); 

			if(p.first->left) q.push({p.first->left,p.second*2-current}); 
			if(p.first->right) q.push({p.first->right,p.second*2-current+1}); 
		}
	}
	return result;
    }
};