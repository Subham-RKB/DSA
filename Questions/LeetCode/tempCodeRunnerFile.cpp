
        }
        if(im){
            cout<<"Case #"<<ii+1<<": IMPOSSIBLE"<<endl;
        }
        else{
            for(int i=0;i<s.length()-1;i++){
                for(int j=i+1;j<s.length();j++){
                    if(s[i]!=s[j]){
                        swap(s[i],s[j]);
                    }
                }
            }
            print(s,ii+1