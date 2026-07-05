class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="";
        int i = (strs[0].size() > strs[strs.size()-1].size())?strs[strs.size()-1].size():strs[0].size();
        for(int j=0;j<i;j++){
            if(strs[0][j]==strs[strs.size()-1][j]) ans+=strs[0][j];
            else break;
        }return ans;
    }
};