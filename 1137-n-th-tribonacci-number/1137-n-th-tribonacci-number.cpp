class Solution {
public:
    int tribonacci(int n) {
        if (n<2){return n;}
        if (n==2){return 1;}        
        int n0=0;
        int n1=1;
        int n2=1;
        int nn=0;
        for (int i=2;i<n;i++){
            nn=n0+n1+n2;
            n0=n1;
            n1=n2;
            n2=nn;
        }
        return nn;
        
    }
};