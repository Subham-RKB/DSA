class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int step=0;
        int n=plants.size();
        int refill=capacity;
        int ans=0;
        int total=accumulate(plants.begin(),plants.end(),0);
        for(int i=0;i<n;i++){
            if(plants[i]<=capacity){
                capacity-=plants[i];
                step++;
                ans++;
                //cout<<step<<endl;
            }
            else{
                capacity=refill;
                ans=ans+(2*step);
                //cout<<step<<endl;
                i--;
            }
        }
        return ans;
        
    }
};