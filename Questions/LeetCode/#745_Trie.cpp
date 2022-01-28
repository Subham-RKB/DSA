struct Node{
    Node *links[27];
    int weight;
    bool contains(char ch){
        return links[ch-'a'];
    }
    void put(char ch,Node* node){
        links[ch-'a']=node;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
};
class Trie{
    public:
    Node* root;
    Trie(){
        root=new Node();
    }
    void insert(string word,int weight){
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(!node->contains(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
            node->weight=weight;
        }
        node->weight=weight;
    }
};
class WordFilter {
public:
    Trie t;
    WordFilter(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string s = words[i];
            string word= "{"+s;
            t.insert(word,i);
            for(int j = s.length()-1;j>=0;j--){
                word=s[j]+word;
                t.insert(word,i);
            }
        }
    }
    int f(string prefix, string suffix) {
        Node* node=t.root;
        string word= suffix+"{"+prefix;
        for(int i=0;i<word.length();i++){
            if(node->contains(word[i])){
                node=node->get(word[i]);
            }
            else return -1;
        }
        return node->weight;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */