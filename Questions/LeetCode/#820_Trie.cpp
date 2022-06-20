struct Node{
    Node *links[26];
    bool end;
    bool contains(char ch)
    {
        return links[ch-'a'];
    }
    void put(char ch,Node* node)
    {
        links[ch-'a'] = node;
    }
    Node* get(char ch)
    {
        return links[ch-'a'];
    }
};
class Trie
{
    public:
    Node* root;
    int enc = 0;
    Trie(){
        root = new Node();
        enc = 0;
    }
    void insert(string word)
    {
        Node* node = root;
        for(int i = word.length()-1;i>=0;i--)
        {
             if(!node->contains(word[i]))
             {
                 node->put(word[i],new Node());
             }
            node = node->get(word[i]);
            //node->weight = i+1;
            if(node->end)
            {
                node->end = false;
                enc -= word.length()-i+1;
            }
            //node->end = false;
        }
        //node->weight = weight;
        node->end = true;
        enc +=word.size()+1;
    }
};

class Solution {
public:
    Trie t;
    static bool comp(string& s1,string& s2)
    {
        return s1.length()<s2.length();
    }
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(),words.end(),comp);
        for(int i = 0;i<words.size();i++)
        {
            string k = words[i];
            cout<<k<<endl;
            //reverse(k.begin(),k.end());
            t.insert(k);
        }
        return t.enc;
        
        
        
//         unordered_map<string,int> m;
//         int ans = 0;
//         int h = 0;
//         sort(words.begin(),words.end(),comp);
//         for(int i = 0;i<words.size();i++)
//         {
//             h=0;
//             string k = words[i];
//             //cout<<k<<endl;
//             int l = k.length();
//             if(m[k]>0){
//                 continue;
//             }
//             else{
//                 ans += k.length()+1;
//                 string temp="";
//                 for(int j = l-1;j>=0;j--)
//                 {
//                     temp = k[j]+temp;
//                     m[temp]++;

//                 }
//             }
//         }
//         return ans;
    }
};
// t i m e
// m e 
// 