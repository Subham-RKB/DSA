struct Node{
    Node *links[26];
    bool flag=false;
    bool contains(char ch){
        return (links[ch-'a']);
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};
class Trie {    
public:
    Node* root;
    Trie() {
        root=new Node();
    }
    void insert(string word){
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(!node->contains(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
        }
        node->setEnd();
    }
    bool search(string word) {
        Node *node=root;
        for(int i=0;i<word.length();i++){
            if(node->contains(word[i])){
                node=node->get(word[i]);    
            }
            else return false;
        }
        if(node->isEnd()==false) return false;
        return true;
    }
    
    bool startsWith(string word) {
        bool f1=true;
        Node* node=root;
        for(int i=0;i<word.length();i++){
            if(node->contains(word[i])){
                node=node->get(word[i]);
            }
            else return false;
        }
        //if(node->isEnd()==true) return false;
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */