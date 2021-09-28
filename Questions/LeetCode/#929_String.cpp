class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        // set<string> sett;
        // for(int i=0;i<emails.size();i++){
        //     string a=emails[i];
        //     string s="";
        //     int k=0;
        //     int c=0;
        //     int b=1;
        //     for(int j=0;j<a.length();j++){
        //         if(a[i]!='.' && k==1){
        //             s=s+a[i];
        //         }
        //         if(a[i]=='@') k=0;
        //         if(k==0 && a[i]=='.') {c++;s=s+a[i];}
        //     }
        //     if(c==1){
        //         if(sett.find(s)==sett.end()){
        //             sett.insert(a);
        //         }
        //     }
        // }
        // return sett.size();
        set<string> sett;
        
        for(int kk=0;kk<emails.size();kk++)
            
        {
            string I=emails[kk];
            int n = I.length() ;
            string tmp = "" ;
            int c = 100 ;
            for(int i=0;i<n;i++)
            {
                if( I[i] == '+' )
                {
                    while( I[i] != '@' )
                        i++ ;
                    c = i ;
                }
                else if( I[i] == '@' )
                    c = i;
                if( I[i] == '.' && i < c )
                    continue ;
                tmp+=I[i] ;
                
            }
            if(!sett.count(tmp))
                sett.insert(tmp) ;
            
        }
        
        
        return sett.size() ;
        
    }
};