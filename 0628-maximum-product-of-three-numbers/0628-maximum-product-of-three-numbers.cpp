class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi1=nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
        int maxi2=nums[nums.size()-1]*nums[0]*nums[1];
        return max(maxi1,maxi2);
    }
};