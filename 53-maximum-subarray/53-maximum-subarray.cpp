class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int max_sum = nums[0];
        int i;
        while(nums[i]<0 && nums.size()<1){
            return nums[i];
        }

          int max=INT_MIN;
        int n=0;
        for(int i=0;i<nums.size();i++){
            n+=nums[i];
            if(max<n){
                max=n;
            }
            if(n<0)
                n=0;
        }
        return max;
    }
};