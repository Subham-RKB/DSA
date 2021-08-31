 #include<bits/stdc++.h>
 using namespace std;
 bool isPalindrome(int x) {
        stack<int> s;
        if(x<0) return false;
        
        else{
            while(x!=0){
                if(s.top()==(x%10)){
                    s.pop();
                }
                else{
                    s.push(x%10);
                }
                x=x/10;
            }
            if(s.empty()){
                return true;
            }
            else{
                return false;
            }
        }
    }
    int main()
    {
        if(isPalindrome(121)){
            cout<<"Yes";
        }
    }