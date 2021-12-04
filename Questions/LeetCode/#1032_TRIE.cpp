class Trie{
    Trie* chars[26]{};
    bool ends=false;
    public:
        void insert(string& s){
            auto curr=this;
            for(int i=s.length()-1;i>=0;i--){
                if(!curr->chars[s[i]-'a']){
                    curr->chars[s[i]-'a']= new Trie();
                }
                    curr=curr->chars[s[i]-'a'];
                
                
            }
            curr->ends=true;
        }
        bool search(string& s){
            auto curr=this;
            for(int i=s.length()-1;i>=0;i--){
                if(!curr->chars[s[i]-'a']) return false;
                curr=curr->chars[s[i]-'a'];
                if(curr->ends) return true;
            }
            return false;
        }
        
};

class StreamChecker {
    Trie *T = new Trie();
    string k="";
public:
    StreamChecker(vector<string>& words) {
        for(auto& s:words){
            T->insert(s);
            //cout<<wordd[0]<<endl;
        }
    }
    bool query(char letter) {
        k+=letter;
        return T->search(k);
    }
};

/**
 * Your StreamChecker object will be instantiated and called as such:
 * StreamChecker* obj = new StreamChecker(words);
 * bool param_1 = obj->query(letter);
 */