class Solution {
public:

int divide(int dividend, int divisor) {
    
	// store in long long int to prevent overflow!
    long long int divi = dividend;
    long long int dis = divisor;
    
	//determine the sign of the quotient using the dividend and divisor
    long long int sign = ((divi<0 && dis<0) || (divi>0 &&dis>0))?1:-1;
    
	//now we will calculate the absolute value of quotient and multiply it with sign to get answer
    divi = abs(divi);
    dis = abs(dis);
    
    long long int ans=0;
    while(divi>=dis)
    {
		//we find the maximum multiple of divisor which we can subtract with dividend
        long long int temp = dis;
        int po=0;
        while(divi>=temp)
        {
            temp = temp<<1ll;
            po++;
        }
        
        temp = temp>>1ll;
        po--;
        
        divi-=temp;
        ans+= 1ll<<po; //adding to answer
    }
    
    ans*=sign;
    return (ans>INT_MAX)?INT_MAX:ans;
}
};
