class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int red=0,white=0,blue=0;
        for (int i=0;i<n;i++){
            if (nums[i]==0){
                red++;
                continue;
            }
            if (nums[i]==1){
                white++;
                continue;
            }
            if (nums[i]==2){
                blue++;
                continue;
            }
        }
        for (int i=0;i<n;i++){
            if (red>0){
                nums[i]=0;
                red--;
                continue;
            }
            if (white>0){
                nums[i]=1;
                white--;
                continue;
            }
            if (blue>0){
                nums[i]=2;
                blue--;
                continue;
            }
        }

    }
};