class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> v(nums.size()+1,1);
        vector <int> p;
        
        for (int i=0;i<nums.size();i++){
            v[nums[i]]--;
        }
        for (int i=0;i<nums.size()+1;i++){
            if (v[i]<0){
                p[0]=i;
            }
            if (v[i]==1){
                p.push_back(i);
            }
        }
        return p;

    }
};