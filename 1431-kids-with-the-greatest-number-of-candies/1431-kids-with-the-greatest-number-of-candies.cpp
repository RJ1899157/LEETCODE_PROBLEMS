class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        int m= INT_MIN;
        for (int i=0;i<candies.size();i++){
            m=max(m,candies[i]);
        }

        for (int i=0;i<candies.size();i++){
            if ((candies[i]+extraCandies)>=m){
                result[i]=true;
            }
            else{
                result[i]=false;
            }
        }
        return result;
        
    }
};