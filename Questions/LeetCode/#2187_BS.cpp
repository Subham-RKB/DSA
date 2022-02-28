class Solution {
public:
    long long int helper(vector<int>& a,long long int t)
    {
        long long int trips =0;
        for(auto& x:a)
        {
            long long int val =x;
            trips +=(t/val);
        }
        return trips;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long int ans = 0;
        sort(time.begin(),time.end());
        long long int  lt=1;
        long long int ht= 1e14;
        while(lt<ht)
        {
            long long int mid = lt+(ht-lt)/2;
            if(helper(time,mid)>=totalTrips) ht=mid;
            else lt=mid+1;
        }
        return lt;
//         int k =time[0];
//         float val=0;
//         for(int i=0;i<time.size();i++)
//         {
//             val+=(1.0)/ceil((time[i]*1.0)/(k*1.0));
//             //cout<<val<<endl;
            
//         }
//         long long a=0;
//         while(int((val*(a/k)))<totalTrips){
//             a++;
//         }
//         //cout<<val<<" "<<a<<endl;
//         return (a)*k;
    }
};
//2,6,9 = 2 
//(1 3 5) 
//