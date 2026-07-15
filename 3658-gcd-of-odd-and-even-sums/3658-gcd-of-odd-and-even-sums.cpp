class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int eve=0,od=0,gcd=1;
        for(int i=1;i<=n*2;i++){
            if(i%2==0) eve+=i;
            else od+=i;
        }
        for(int i=1;i<=min(eve,od);i++){
            if(eve%i==0 && od%i==0) gcd=max(gcd,i);
        }return gcd;
    }
};