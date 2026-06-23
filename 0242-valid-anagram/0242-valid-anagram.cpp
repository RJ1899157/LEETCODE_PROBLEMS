class Solution {
public:
    bool isAnagram(string s, string t) {
        //transform(s.begin(), s.end(), s.begin(), ::tolower);
        //transform(t.begin(), t.end(), t.begin(), ::tolower);
        if (s.size()!=t.size()){
            return false;
        }
        else{
            unordered_map<char,int> mp;
            for (int i=0;i<s.size();i++){
                if (mp.count(s[i])){
                    mp[s[i]]++;
                }
                else{
                    mp[s[i]]=1;
                }
            }
            for (int i=0;i<t.size();i++){
                if (mp.count(t[i]) && mp[t[i]]>0){
                    mp[t[i]]--;
                }
                else{
                    return false;;
                }
            }
            return true;
        }
        return false;
    }
};