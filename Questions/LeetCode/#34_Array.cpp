class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
//         //if(nums.size()==0) return {0};
//         int start=0;
//         int end=nums.size();
//         vector<int> v(2,-1);
//         while(start<=end){
//             // if(nums[start]!=target && nums[end]!=target){
//             //     start++;
//             //     end--;
//             // }
//             // else if(nums[end]==target){
//             //     if(nums[end-1]==target) return {end-1,end};
//             //     else return {end,end};
//             // }
//             // else if(nums[start]==target){
//             //     if(nums[start+1]==target) return {start,start+1};
//             //     else return {start,start};
//             // }
            
//             int mid=start+(end-start)/2;
//             if(nums[mid]<target){
//                 start=mid+1;
//             }
//             else if(nums[mid]>target){
//                 end=mid-1;
//             }
//             else{
//                 if(mid==start || nums[mid]!=nums[mid-1]){
//                     v[0]=mid;
//                     break;
//                 }
//                 else{
//                     end=mid-1;
//                     v[0]=mid-1;
//                 }
//             }
//         }
//         int s=0,e=nums.size()-1;
//         while(s<=e){
//             int m=s+(e-s)/2;
//             if(nums[m]<target){
//                 s=m+1;
//             }
//             else if(nums[m]>target){
//                 e=m-1;
//             }
//             else{
//                 if(m==e || nums[m]!=nums[m+1]){
//                     v[1]=m;
//                     break;
//                 }
//                 else{
//                     s=m+1;
//                     v[1]=m+1;
//                 }
//             }
//         }
//         return v;
        vector<int> a=nums;
        int s = 0, e = a.size()-1;
	vector<int> ans(2, -1);
	//first occurrence
	while(s <= e){
		int m = s + (e-s)/2;
		if(a[m] < target)
			s = m+1;
		else if(a[m] > target)
			e = m-1;
		else{
			if(m == s || a[m] != a[m-1]){
				ans[0] = m;
				break;
			}
			else{
				e = m-1;
				ans[0] = m-1;
			}
		}
	}

	//last occurrence
	s = 0, e = a.size()-1;
	while(s <= e){
		int m = s + (e-s)/2;
		if(a[m] < target)
			s = m+1;
		else if(a[m] > target)
			e = m-1;
		else{
			if(m == e || a[m] != a[m+1]){
				ans[1] = m;
				break;
			}
			else{
				s = m+1;
				ans[1] = m+1;
			}
		}
	}
	return ans; 

    }
};