class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        //precomputation
        vector<int> ans(n+1,1);
        for(int i=2;i<n+1;i++){
            if(ans[i]==1){
                for(long long j=(long long)i*i;j<n+1;j=j+i){
                    ans[j]=0;
                }
            }
        }
        for(int i=2;i<ans.size()-1;i++){
            if(ans[i]==1) cnt++;
        }
        return cnt;
    }
};