class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum=0;
        for(int i=1;i<(1<<nums.size());i++){
            int xorr=0;
            for(int j=0;j<32;j++){
                if(i & (1<<j)){
                    xorr^=nums[j];  
                }
            }sum+=xorr;
        }return sum;
    }
};