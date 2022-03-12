/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        vector<Node*> v;
        vector<int> val;
        vector<int> index;
        int n=0;
        while(head)
        {
            n++;
            v.push_back(head);
            val.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<n;i++)
        {
            Node *temp = v[i]->random;
            int k=0;
            for(int j=0;j<n;j++)
            {
                if(temp==v[j])
                {
                    index.push_back(j);
                    k=1;
                    break;
                }
            }
            if(!k) index.push_back(-1);
        }
        vector<Node*> answer;
        Node *ans = new Node(10000);
        Node *ok = ans;
        for(int i=0;i<val.size();i++)
        {
            answer.push_back(new Node(val[i]));
        }
        for(int i=0;i<answer.size();i++)
        {
            ok->next=answer[i];
            ok=ok->next;
            if(index[i]!=-1){
                ok->random=answer[index[i]];
            }
            else{
                ok->random=NULL;
            }
        }
        return ans->next;
    }
};