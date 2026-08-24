class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1) maxi=max(maxi,i-l+1);
            else{
                if(k>0){
                    maxi=max(maxi,i-l+1);
                    k--;
                }else{
                    while(nums[l]!=0) l++;
                    l++;
                }
            }
        }return maxi;
    }
};