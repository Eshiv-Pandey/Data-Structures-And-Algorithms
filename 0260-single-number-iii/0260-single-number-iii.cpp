class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()){
            if(ans.size()==2) return ans;
            if(ans.size()!=2 && i==nums.size()-1) ans.push_back(nums[i]);
            else if(nums[i]==nums[i+1]) i+=2;
            else ans.push_back(nums[i++]);
        }return ans;
    }
};