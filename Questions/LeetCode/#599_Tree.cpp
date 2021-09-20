/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL) return 0;
        int ans=0;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            ans=ans+1;
            int a=q.size();
            for(int i=0;i<a;i++){
                Node* p=q.front();q.pop();
                for(auto child:p->children) if(child)q.push(child);
            }
        }
        return ans;
    }
};