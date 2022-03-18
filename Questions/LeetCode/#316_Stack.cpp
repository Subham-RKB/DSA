class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> v_first(26,0);
        vector<int> v_last(26,0);
        stack<char> S;
        int n= s.length();
        for(int i=0;i<n;i++)
        {
            v_first[s[i]-'a']++;
        }
        for(int i=0;i<n;i++)
        {
            char c = s[i];
            v_first[s[i]-'a']--;
            if(v_last[s[i]-'a']) 
            {
                continue;
            }
            while(!S.empty() && S.top()>s[i] && v_first[S.top()-'a']>0)
            {
                v_last[S.top()-'a'] =0;
                S.pop();
            }
            v_last[c-'a']=1;
            S.push(c);
        }
            
        //     if(S.empty())
        //     {
        //         S.push(s[i]);
        //         v_first[s[i]-'a']--;
        //         v_last[s[i]-'a']++;
        //         continue;
        //     }
        //     while(S.empty() && (S.top()-'a'>s[i]-'a') && v_first[s[i]-'a']>1)
        //     {
        //         v_last[S.top()-'a']--;
        //         S.pop();
        //     }
        //     if(v_last[s[i]-'a']<1)
        //     {
        //         S.push(s[i]);
        //     }
        //     v_first[s[i]-'a']--;
        // }
        
    //     vector<char> v(s.length());
    //     vector<int> v_count(26,0);
    //     int n = s.length();
    //     v[n-1]=s[n-1];
    //     v_count[s[n-1]-'a']++;
    //     for(int i=n-2;i>=0;i--)
    //     {
    //         v_count[s[i]-'a']++;
    //         if(v[i+1]<s[i])
    //         {
    //             v[i]=v[i+1];
    //         }
    //         else{
    //             v[i]=s[i];
    //         }
    //     }
    //     string answer="";
    //     for(int i=0;i<n;i++)
    //     {
    //         if(v_count[s[i]-'a']==1)
    //         {
    //             answer+=s[i];
    //         }
    //         else
    //         {
    //             if(s[i]<=v[i])
    //             {
    //                 answer+=s[i];
    //             }
    //         }
    //         v_count[s[i]-'a']--;
    //     }
    //     // vector<int> v_first(26,0);
    //     // vector<int> v_last(26,0);
    //     // int n=s.length();
    //     // string h="";
    //     // for(int i=0;i<n;i++)
    //     // {
    //     //     v_first[s[i]-'a']+=1;
    //     // }
    //     // for(int i=0;i<n;i++)
    //     // {
    //     //     int k = s[i]-'a';
    //     //     v_last[k]++;
    //     //     v_first[k]--;
    //     //     h+=char(k+97);
    //     //     cout<<h<<endl;
    //     //     for(int j=k+1;j<26;j++)
    //     //     {
    //     //         if(v_last[j]>=1 && v_first[j]>1)
    //     //         {
    //     //             v_last[j]--;
    //     //             h=popp(char(j+97),h);
    //     //             v_first[j]++;
    //     //         }
    //     //     }
    //     // }
    //     // string answer="";
    //     // for(int i=0;i<26;i++)
    //     // {
    //     //     char c;
    //     //     if(v_last[i]!=0)
    //     //     {
    //     //         c=char(i+97);
    //     //         answer+=c;
    //     //     }
    //     // }
    //     return answer;
        string answer="";
        while(!S.empty())
        {
            answer+=S.top();
            S.pop();
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};
//cbacdcbc adbc
//aaabbbbc
//cdabcabad
//a