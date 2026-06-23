class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size()<4){
            return {};
        }
        sort(nums.begin(),nums.end());

        vector<vector<int>> ans;
        
        for (int i=0;i<nums.size()-3;i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            long long tag = (long long)target - nums[i];

            for (int j=i+1;j<nums.size()-2;j++){

                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                vector<int> temp = {nums[i], nums[j]};

                int k=j+1;
                int l=nums.size()-1;
                long long newtag = tag - nums[j];

                while (k<l){
                    long long sum = (long long)nums[k] + nums[l];

                    if (sum == newtag) {

                        temp.push_back(nums[k]);

                        temp.push_back(nums[l]);

                        ans.push_back(temp);

                        temp.pop_back();

                        temp.pop_back();

                        k++;

                        l--;

                        while (k < l && nums[k] == nums[k - 1]) k++;

                        while (k < l && nums[l] == nums[l + 1]) l--;

                    }

                    else if (sum > newtag) {

                        l--;

                    }

                    else {

                        k++;

                    }
                }
            }

        }
        return ans;
        
    }
};