class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        for (int i=0; i<nums.size();i++){
            int x= nums[i];
            int j=i+1;
            while(j<nums.size()){
                int y= nums[j];
                if (x+y<target){
                    count++;
                }
                j++;
            }
        }
        return count;
        
    }
};