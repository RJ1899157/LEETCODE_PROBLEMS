class Solution {
public:
    vector<int> merge(const vector<int>& arr1,const vector<int>& arr2){
        int i=0;int j=0;
        vector<int> arr3;
        while(i<arr1.size() && j<arr2.size()){
            if(arr1[i]<=arr2[j]){
                arr3.push_back(arr1[i]);
                i++;
            }
            else{
                arr3.push_back(arr2[j]);
                j++;
            }
        }
        while (i < arr1.size()) {
            arr3.push_back(arr1[i]);
            i++;
        }

        while (j < arr2.size()) {
            arr3.push_back(arr2[j]);
            j++;
        }
        return arr3;
    }
    vector<int> sortArray(vector<int>& nums) {
        vector<int> ans;
        if (nums.size()==1){
            return nums;
        }
        int mid = nums.size()/2;
        vector<int> m1(nums.begin(),nums.begin()+mid);
        vector<int> m2(nums.begin()+mid,nums.end());
        return merge(sortArray(m1),sortArray(m2));
    }
};