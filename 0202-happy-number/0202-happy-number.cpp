class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);

            int sum = 0;
            while(n > 0){
                int a = n % 10;
                sum += (a * a);
                n = n / 10;
            }
            
            n = sum;
        }
        if (n == 1) return true;
        else return false;
    }
};