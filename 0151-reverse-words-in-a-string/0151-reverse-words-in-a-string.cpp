class Solution {
public:
    string reverseWords(string s) {
        vector<string> vs;
        string ss="";
        for (int i=0;i<s.size();i++){
            if (s[i]==' '){
                if (!ss.empty()) {
                    vs.push_back(ss);
                    ss = "";
                }
            }
            else{
                ss+=s[i];
            }
        }
        if (!ss.empty()) {
            vs.push_back(ss);
        }
        string res="";
        for (int i=vs.size()-1;i>=0;i--){
            res+=vs[i];
            if (i > 0) {
                res += " ";
            }
        }
        return res;
    }
};