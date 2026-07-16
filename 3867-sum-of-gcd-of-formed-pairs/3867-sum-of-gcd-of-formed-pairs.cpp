class Solution {
public:
    long long gcd(long long a, long long b){
        while(a>0 && b>0){
            if(a>b) a=a%b;
            else b=b%a;
        }if(a==0) return b;
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int maxi=0;
        long long sum=0;
        vector<long long> prefix(nums.size());
        for(int i=0;i<nums.size();i++){
            maxi=max(nums[i],maxi);
            prefix[i]=gcd(nums[i],maxi);
        }
        sort(prefix.begin(),prefix.end());
        int left=0,right=prefix.size()-1;
        while(left<right){
            sum+=gcd(prefix[left],prefix[right]);
            left++;
            right--;
        }
        return sum;
    }
};