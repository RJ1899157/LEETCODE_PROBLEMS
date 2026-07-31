class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size()==1) return nums[0];
        unordered_map<int,int> mp;
        for (int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for (int j=0;j<nums.size();j++){
            if (mp[nums[j]]==1){
                return nums[j];
            }
        }
        return 0;
    }
};