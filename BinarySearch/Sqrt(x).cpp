class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
         return x;
        if(x==1)
            return 1;
        long long ans;
        long long i;
        for(i=0;i<2147483648;i++)
        {
            if(i*i<=x)
                ans=i;
            else
                return ans;
        
        }
        return ans;
    }
        
};
