class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;

        for (int x : nums) {
            if (x > 0) pos.push_back(x);
            else neg.push_back(x);
        }
        vector<int> ans(nums.size());
        int p = 0, q = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0) ans[i] = pos[p++];
            else ans[i] = neg[q++];
        }
        return ans;
    }
};