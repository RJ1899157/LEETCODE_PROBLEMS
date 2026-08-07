class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        vector<int> v;
        while (x>0){
            int n=x%10;
            v.push_back(n);
            x=x/10;
        }
        int i=0;int j=v.size()-1;
        while (i<j){
            if (v[i]!=v[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};