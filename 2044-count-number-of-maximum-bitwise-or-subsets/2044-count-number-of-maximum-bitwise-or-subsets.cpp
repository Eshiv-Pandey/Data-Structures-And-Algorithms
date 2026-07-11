class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxi=0,cnt=0;
        if(nums.size()==1) return 1;
        for(int i=1;i<(1<<nums.size());i++){
            int bitr=0;
            for(int j=0;j<32;j++){
                if(i & (1<<j)) bitr|=nums[j];
            }if(bitr>maxi){ 
                maxi=bitr;
                cnt=1;
            }else if(bitr==maxi) cnt++;
        }return cnt;
    }
};