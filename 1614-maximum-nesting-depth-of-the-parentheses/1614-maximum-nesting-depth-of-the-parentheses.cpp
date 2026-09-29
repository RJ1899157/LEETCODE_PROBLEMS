class Solution {
public:
    int maxDepth(string s) {
        int maxdep=0;
        int dep=0;
        for (char c : s) {
            if (c =='('){
                dep++;
                maxdep=max(maxdep,dep);
            }
            else if (c ==')') dep--;
        }
        return maxdep;
        
    }
};