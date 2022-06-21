class Solution {
public:
    int furthestBuilding(vector<int>& h, int bricks, int ladders) {
        priority_queue <int, vector<int>, greater<int> > pq;
        int i = 0;
        int n = h.size();
        int k = ladders;
        while(i<n-1 && k)
        {
            if(h[i+1]-h[i]>0)
            {
                k--;
                pq.push(h[i+1]-h[i]);
            }
            i++;
        }
        while(i<n-1)
        {
            int diff = h[i+1]-h[i];
            if(diff>0)
            {
                if(!pq.empty() && pq.top()<diff)
                {
                    bricks-=pq.top();
                    pq.pop();
                    pq.push(diff);
                }
                else{
                    bricks-=diff;
                }
            }
            if(bricks<0) return i;
            i++;
        }
        return i;
    }
};