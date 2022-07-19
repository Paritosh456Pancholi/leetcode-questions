class Solution {
public:
         int SqSum(int n){
        int sum=0;
        while(n>0){
            sum=sum+((n%10)*(n%10));
            n=n/10;
        }
        return sum;
    }
    
    bool isHappy(int n) {        
        int t=n;
        while(1)
        {
            if(t==89)
                return false;
            if(t==1)
                return true;
            t=SqSum(t);
        }
        
    }
};
    