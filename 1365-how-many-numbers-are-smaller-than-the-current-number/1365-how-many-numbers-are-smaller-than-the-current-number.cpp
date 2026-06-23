class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size());
        vector<int> v(nums.begin(),nums.end());
        sort(v.begin(),v.end());

        for (int i=0;i<nums.size();i++){
            int j=0;
            while (nums[i]!=v[j]){
                j++;
            }
            ans[i]=j;
        }
        return ans;
    }
};