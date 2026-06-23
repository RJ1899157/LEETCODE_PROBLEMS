class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        for (auto it : jewels){
            mp[it]=0;
        }

        for (int i =0; i<stones.size();i++){
            if (mp.count(stones[i])){
                mp[stones[i]]++;
            }
        }
        int sum=0;
        for (auto it : mp){
            sum+=it.second;
        }
        return sum;
    }
};