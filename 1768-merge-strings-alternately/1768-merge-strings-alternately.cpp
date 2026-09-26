class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged;
        int p=0,q=0;
        while(p<word1.size() && q<word2.size()){
            if (p<=q) merged+=word1[p++];
            else merged+=word2[q++];
        }
        while(p<word1.size()) merged+=word1[p++];
        while(q<word2.size()) merged+=word2[q++];
        return merged;
    }
};