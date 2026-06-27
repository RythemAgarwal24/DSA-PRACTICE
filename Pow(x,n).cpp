class Solution {
public:
    double myPow(double x, long long n) {
        if (n==0) return 1;
        
        if(n<0){
           return 1.0/myPow(x, -n);
        }

        if(n%2==0){
            double half = myPow(x ,n/2);
            return half = half * half;
        }
        else{
            return x * myPow(x, n-1);
        }
        
    }
};