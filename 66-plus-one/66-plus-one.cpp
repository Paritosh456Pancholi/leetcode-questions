class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]<9)
            {digits[i]++ ; 
             return digits;} 
            else
                digits[i]=0;
        }
        //initiliziing vector ofsize n+ with all value 0
        //if the num is 999 then this case will run
        vector<int>newnumber(n+1,0);
        newnumber[0]=1;
        return newnumber;
    }};