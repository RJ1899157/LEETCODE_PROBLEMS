class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        for(int i = 0; i < k; i++){

            int maxVal = 0;
            int maxKey;

            for(auto x : mp){
                if(x.second > maxVal){
                    maxVal = x.second;
                    maxKey = x.first;
                }
            }

            res.push_back(maxKey);
            mp.erase(maxKey);
        }

        return res;
    }
};