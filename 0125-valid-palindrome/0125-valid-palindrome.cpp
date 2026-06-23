class Solution {
public:
    bool isPalindrome(string s) {
        string t="";
        int x=0;
        if (s.size()==1){
            return true;
        }
        for (char &c:s){
            c = tolower(c);
            if (isalnum(c)){
                t+=c;
            }
            else{continue;}
        }
        int y=t.size()-1;
        for (int i=0;i<t.size();i++){
            if (t[x]!=t[y]){
                return false;
            }
            else{
                x++;
                y--;
            }
        }
        return true;
    }
};