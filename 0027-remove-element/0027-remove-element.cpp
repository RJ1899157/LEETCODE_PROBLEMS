class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==val){
                v.push_back(i);
            }
        }

        for (int j = v.size()-1;j>=0;j--){
            nums.erase(nums.begin()+v[j]);
        }
        return nums.size();
        
    }
};