class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> pairXOR;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                pairXOR.insert(nums[i]^nums[j]);
            }
        }
        unordered_set<int> tripletXOR;
        for(int i=0;i<nums.size();i++){
            for(auto it:pairXOR){
                tripletXOR.insert(nums[i]^it);
            }
        }
        return tripletXOR.size();
    }
};