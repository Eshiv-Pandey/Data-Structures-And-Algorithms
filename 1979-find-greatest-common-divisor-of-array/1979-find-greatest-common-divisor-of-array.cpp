class Solution {
public:
    int gcd(int a,int b){
        while(a>0 and b>0){
            if(a>b) a=a%b;
            else b=b%a;
        }if(a==0) return b;
        return a;
    }

    int findGCD(vector<int>& nums) {
        return gcd(*max_element(nums.begin(),nums.end()),
        *min_element(nums.begin(),nums.end()));
    }
};