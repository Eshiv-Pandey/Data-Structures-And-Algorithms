class Solution {
public:
    int countPrimes(int n) {
        vector<int> prime(n,1);
        if(n==0 || n==1) return 0;
        int cnt=0;
        prime[0]=0,prime[1]=0;
        for(int i=2;(long long)i*i<prime.size();i++){
            if(prime[i]==1){
                for(long long j=(long long)i*i;j<prime.size();j=j+i){
                    prime[j]=0;
                }
            }
        }
        for(auto it:prime){
            if(it==1) cnt++;
        }return cnt;
    }
};