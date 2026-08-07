class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        vector<vector<int>> v;
        vector<int> v2;
        for (auto it:count){
            v.push_back({it.second,it.first});
        }
        sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
            if (a[0] == b[0]) {
                return a[1] > b[1];
            }
            return a[0] < b[0];
        });

        for(int i=0;i<v.size();i++){
            int x=0;
            while(x<v[i][0]){
                v2.push_back(v[i][1]);
                x++;
            }
        }

        return v2;
    }
};