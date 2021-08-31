#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }
    Node * insert(Node * root, int value) {
        Node * r = root;
   Node *rs = NULL; 
   Node *ls = NULL;
   
   if(root == NULL){
       root = new Node(); 
       root->data = value;
       root->left = root->right = NULL;
   }
   
   while(r != NULL){
       if(value < r->data){
           if(r->left == NULL) ls = r;
           r = r->left;
       } else if(value > r->data) {
           if(r->right == NULL) rs = r;
           r = r->right;
       }
   }
   
   r = new Node;
   r->data = value;
   r->left = r->right = NULL;
   if(ls != NULL) ls->left = r;
   if(rs != NULL) rs->right = r;

        return root;
    }

};

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
    myTree.preOrder(root);
  
    return 0;
}