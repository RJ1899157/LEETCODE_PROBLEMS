class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=INT_MAX;
        int mx=INT_MIN;
        for (int i=0;i<nums.size();i++){
            if (nums[i]<mn){
                mn=nums[i];
            }
            if(nums[i]>mx){
                mx=nums[i];
            }
        }
        int gcd=1;
        if (mx%mn==0) return mn;
        for (int j=2;j<mn/2+1;j++){
            if (mn%j==0 && mx%j==0){
                gcd=j;
            }
        }
        return gcd;
    }
};