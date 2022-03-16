class Solution {
public:
    int minMovesToMakePalindrome(string s) {
        int f = 0;
        int l = s.length()-1;
        int count=0;
        int y=-1;
        while(f<=l)
        {
            if(s[f]!=s[l])
            {
                int i=l;
                while(i>f && s[i]!=s[f])
                {
                    i--;
                }
                if(f==i)
                {
                    l++;
                    y=i;
                }
                else{
                    while(i<l)
                    {
                        swap(s[i],s[i+1]);
                        count++;
                        i++;
                    }
                }
            }
            f++;
            l--;
       }
    if(y!=-1)count+=((n)/2)-(y);
    return count;
    }
};
//aabb
//abba


