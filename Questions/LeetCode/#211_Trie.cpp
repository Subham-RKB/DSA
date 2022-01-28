struct Node{
    Node *links[47];
    bool flag=false;
    bool contains(char ch){
        // if(ch!='.') return (links[ch-'a']);
        // else return links[27];
        return (links[ch-'a']);
    }
    void put(char ch,Node* node){
        // if(ch!='.') links[ch-'a']=node;
        // else links[27]=node;
        links[ch-'a']=node;
    }
    Node* get(char ch){
        // if(ch!='.') return links[ch-'a'];
        // else return links[27];
        return links[ch-'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};
class WordDictionary {
public:
    Node *root;
    WordDictionary() {
        root=new Node();
    }
    void addWord(string word) {
        Node *node=root;
        Node *node1=root;
        for(int i=0;i<word.size();i++){
            if(!node->contains(word[i])){
                //node->put('.',new Node());
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
            
        }
        node->setEnd();
    }
    bool search(string word) {
        Node* node=root;
        return search(word,0,node);
    }
private:
        bool search(string &word,int pos,Node* root){
            if(pos==word.size()) return root->isEnd();
            if(word[pos]!='.'){
                root=root->get(word[pos]);
                return root? search(word,pos+1,root): false;
            }
            for(int i=0;i<26;i++){
                if(root->contains(char(i+97)) && search(word,pos+1,root->get(char(i+97)))) return true;
                
            }
            return false;
        }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */