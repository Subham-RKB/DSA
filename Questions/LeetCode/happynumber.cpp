class Solution {
public:
    bool isHappy(int n) {
        if(n==1) return true;
        set<int> s;
        int a=0;
        int index=0;
        while(1){
            a=0;
            while(n){
                index=n%10;
                a+=index*index;
                n=n/10;
            }
            if(a==1)
                return true;
            else if(s.find(a)!=s.end())
                return false;
            s.insert(a);
            n=a;
        }
        return false;
    }
};