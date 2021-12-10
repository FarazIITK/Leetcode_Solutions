class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        
        int n = nums.size();
        // Finding the zero based index of minimum and maximum number in the array
        int min = 0, max = 0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[max]){
                max = i;
            }
            if(nums[i]<nums[min]){
                min = i;
            }
        }
        // There are three possibility of removing the min and max
        // 1. Remove both from the front
        // 2. Remove both from the end
        // 3. Remove from either ends
        
        int ans1 = ((min>max? min : max)+1);
        int ans2 = n - (min>max? max : min) ;
        int ans3 = min > max ? (max+1 + n-min) : (min+1 +n-max);
        
        // Finding the manimum from all the 3 cases 
        int ans = ans1 > ans2 ? ans2 : ans1;
        ans = ans > ans3 ? ans3 : ans;
        return ans;
        
    }
};