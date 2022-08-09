class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> answer;
        vector<int> a;
        a=candies;
        sort(a.begin(),a.end());
        int s=candies.size();
        for(int i=0;i<s;i++){
            if(candies[i]+extraCandies>=a[s-1])
                answer.push_back(true);
            else
                answer.push_back(false);
        }
        return answer;
    }
};


/*vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int n=extraCandies;
        vector<int>a;
        a=candies;
        sort(a.begin(),a.end());
        int y=candies.size();
        int x=a[y-1];
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+n>=x){
                ans.push_back(true);
            }
            else
                ans.push_back(false);
        }
        return ans;
    }
};*/