class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumarr=0;
        for(int i=0;i<nums.size();i++)
            sumarr+=nums[i];
        
        int n=nums.size();
        int exsum=(n*(n+1)/2);
        int sum=exsum-sumarr;
        return sum;
        
    }
};