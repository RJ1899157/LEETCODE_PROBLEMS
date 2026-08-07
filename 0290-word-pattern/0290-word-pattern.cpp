class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;

        int n = s.size();
        int j = 0;

        for (int i=0;i<pattern.size();i++){
            if (j >= n) return false;

            string word;
            while (s[j] !=' ' && j<n){
                word+=s[j];
                j++;
            }
            if (p2w.count(pattern[i])){
                if (p2w[pattern[i]]!= word) return false;
            }
            else{
                if (w2p.count(word)) return false;
                p2w[pattern[i]] = word;
                w2p[word] = pattern[i];
            }
            while (j < n && s[j] == ' ') j++;
        }
        return j==n;
    }
};