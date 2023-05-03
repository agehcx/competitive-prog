class Solution {
public:
    int reverse(long x) {
        long r = 0;
        long tmp = x;
        while(x!=0) {
            r = r*10 + x%10;
            x = x/10;
        }
        if(r > INT32_MAX || r < INT32_MIN ) return 0; 
        return r;
    }
};
