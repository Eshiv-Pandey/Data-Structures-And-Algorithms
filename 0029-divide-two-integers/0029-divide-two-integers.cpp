class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        else if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        int sign=1;
        if((dividend>0 && divisor<0) || (dividend<0 && divisor>0)) sign=-1;
        long long ans=0;
        long long divi=llabs(dividend),divs=llabs(divisor);  
        while(divi>=divs){
            int cnt=0;
            while(divi>=(divs<<(cnt+1))) cnt++;
            ans+=1<<cnt;
            divi=divi-(divs<<cnt);
        }return sign*ans;
    }
};