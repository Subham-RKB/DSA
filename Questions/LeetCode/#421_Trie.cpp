struct Node{
    Node* links[2];
    bool contains(int bit){
        return (links[bit]!=NULL);
    }
    void put(int bit,Node* node){
        links[bit]=node;
    }
    Node* get(int bit){
        return links[bit];
    }
};
class Tire{
private: Node* root;
    public: Tire(){
        root=new Node();
    }
public:
    void insert(int num){
        Node* node=root;
        for(int i=31;i>=0;i--){
            int bit = (num>>i)&1;
            if(!node->contains(bit)){
                node->put(bit,new Node());
            }
            node=node->get(bit);
        }
           
    }
public:
    int getMax(int num){
        Node* node=root;
        int maxNum=0;
        for(int i=31;i>=0;i--){
            int bit= (num>>i)&1;
            if(node->contains(1-bit)){
                maxNum=maxNum|(1<<i);
                node = node->get(1-bit);
            }
            else{
                node=node->get(bit);
            }
        }
        return maxNum;
    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Tire tire;
        for(auto& it:nums){
            tire.insert(it);
        }
        int mx=0;
        for(auto& it:nums){
            mx=max(mx,tire.getMax(it));
        }
        return mx;
    }
};