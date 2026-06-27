class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum(nums.size());
        vector<int> rightsum(nums.size());
        for (int i=0;i<nums.size();i++){
            int x=i-1;
            if (i==0){
                leftsum[i]=0;
            }
            while(x>=0){
                leftsum[i]+=nums[x];
                x--;
            }
        }
        for (int i=nums.size()-1;i>=0;i--){
            int x=i+1;
            if (i==nums.size()-1){
                rightsum[i]=0;
            }
            while(x<nums.size()){
                rightsum[i]+=nums[x];
                x++;
            }
        }
        vector<int> answer(nums.size());
        for (int i=0;i<nums.size();i++){
            int a= leftsum[i] - rightsum[i];
            if (a<0){
                a= a*-1;
            }
            answer[i]=a;
        }
        return answer;
    }
};