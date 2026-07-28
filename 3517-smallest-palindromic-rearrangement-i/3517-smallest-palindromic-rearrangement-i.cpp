class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> nums(26,0);
        string od="";
        string ans="";
        for(int i=0;i<s.size();i++){
            nums[s[i]-'a']++;
        }
        for(int i=0;i<nums.size();i++){
            int j=0;
            if(nums[i]%2==1) od='a'+i;
            while(j!=nums[i]/2){
                ans+='a'+i;
                j++;
            }
        }
        string orgi=ans;
        reverse(ans.begin(),ans.end());
        return orgi+od+ans;

    }
};