class Solution {
public:
    int convertTime(string current, string correct) {
        int curr_hr =  10*(current[0]-'0')+(current[1]-'0');
        int curr_min =  10*(current[3]-'0')+(current[4]-'0');
        int corr_hr =  10*(correct[0]-'0')+(correct[1]-'0');
        int corr_min =  10*(correct[3]-'0')+(correct[4]-'0');
        int diff = (-curr_hr+corr_hr)*60+(-curr_min+corr_min);
        cout<<diff<<endl;
        int count =  0;
        while(diff>0)
        {
            if(diff<5)
            {
                count+=diff;
                break;
            }
            else if(diff>=5 && diff<15)
            {
                diff-=5;
            }
            else if(diff>=15 && diff<60)
            {
                diff-=15;
                
            }
            else if(diff>=60)
            {
                diff-=60;
            }
            count+=1;
        }
        return count;
        
    }
};