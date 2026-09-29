class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int curentsum = 0;
        for (int i = 0; i < k; ++i) {
            curentsum += nums[i];
        }
        int maxsum=curentsum;
        for (int i = k; i < nums.size(); ++i) {
            curentsum += nums[i] - nums[i - k];
            maxsum = max(maxsum, curentsum);
        }
        return (double)maxsum/k;
        
    }
};