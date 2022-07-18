class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       {
        set<int> s;
		
        s.insert(nums.begin(),nums.end()); 
		
        bool ans = nums.size()!=s.size();  
		
        return ans;
        
    }
};
};