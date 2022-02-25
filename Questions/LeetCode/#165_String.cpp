class Solution {
public:
      
    int compareVersion(string version1, string version2) {
        int i=0;
        int j=0;
        int n=version1.size();
        int m=version2.size();
        int n1=0;
        int m1=0;
        while(i<n || j<m){
            while(i<n && version1[i]!='.'){
                n1=n1*10+(version1[i]-'0');
                i++;
            }
            while(j<m && version2[j]!='.'){
                m1=m1*10+(version2[j]-'0');
                j++;
            }
            if(n1>m1) return 1;
            else if(n1<m1) return -1;
            n1=0;
            m1=0;
            i++;
            j++;
        }
        return 0;
    }
};