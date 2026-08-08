class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int mc=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if (nums[i]==1){
                count++;
                mc=max(mc,count);
            }
            else count=0;
        }
        mc=max(mc,count);
        return mc;
        
    }
};