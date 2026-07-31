class Solution {
public:
    int longestPalindrome(string s) {
        if (s.length()==1) return 1;
        unordered_map<char,int> mp;
        int len=0;
        bool oddFound = false;
        for (auto it:s){
            mp[it]++;
        }
        for (auto it:mp){
            int count = it.second;
            if (count%2==0){
                len+=count;
            }
            else{
                len += count - 1;
                oddFound = true;
            }
        }
        if (oddFound) {
            len += 1;
        }
        return len;

    }
};