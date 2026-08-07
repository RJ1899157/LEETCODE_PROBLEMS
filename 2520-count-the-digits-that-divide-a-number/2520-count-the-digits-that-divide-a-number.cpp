class Solution {
public:
    int countDigits(int num) {
        int count=0;
        int a=num;
        while (a%10!=0){
            int x= a%10;
            if (num%x==0){
                count++;
            }
            a=a/10;
        }
        return count;   
    }
};