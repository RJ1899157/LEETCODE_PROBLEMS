class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        long long left = 0, current_sum = 0;
        long long max_freq = 0;
        
        for (long long right = 0; right < nums.size(); ++right) {
            current_sum += nums[right];
            while ((right - left + 1) * nums[right] - current_sum > k) {
                current_sum -= nums[left];
                left++;
            }
            
            max_freq = max(max_freq, right - left + 1);
        }
        
        return max_freq;
    }
};