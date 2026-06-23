class Solution {
public:
    int fib(int n) {
        int n1=0;
        int n2=1;
        if (0==n){
            return n1;
        }
        if (1==n){
        return n2;
        }

        else{
            int n3=0;
            for (int i=0;i<n-1;i++){
                n3=n1+n2;
                n1=n2;
                n2=n3;
            }
            return n3;
        }
    }
};