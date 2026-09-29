class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int laralt=0;
        int curalt=0;
        for (int a:gain){
            curalt+=a;
            laralt=max(laralt,curalt);
        }
        return laralt;    
    }
};