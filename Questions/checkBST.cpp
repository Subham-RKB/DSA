vector<int> v;
	bool checkBST(Node* root) {
        
		if(root==NULL)
            return true;
        bool a=checkBST(root->left);
        if(!a) return false;
        v.push_back(root->data);
        a=checkBST(root->right);
        if(!a) return false;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1])
                return false;
        }
        return true;
	}