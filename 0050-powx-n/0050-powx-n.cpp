class Solution {
public:
    double myPow(double x, int n) {
        long long N=n;
        if (N<0){
            x=1/x;
            N = -N;
        }
        double a=1;

        while (N>0){
            if (N%2==0){
                x=x*x;
                N=N/2;
            }
            else{
                a=a*x;
                N--;
            }
        }
        return a;
    }
};