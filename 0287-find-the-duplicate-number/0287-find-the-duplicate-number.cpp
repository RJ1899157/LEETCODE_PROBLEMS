class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> v(nums.size(),1);
        
        for (int i=0;i<nums.size();i++){
            v[nums[i]]--;
        }
        for (int i=0;i<nums.size();i++){
            if (v[i]<0){
                return i;
            }
        }
        return 0;
        
    }
};