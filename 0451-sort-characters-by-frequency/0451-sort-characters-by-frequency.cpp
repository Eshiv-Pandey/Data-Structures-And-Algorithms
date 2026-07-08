class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto it:s) mp[it]++;
        vector<vector<char>> bucket(s.size()+1);
        for(auto &it:mp){
            bucket[it.second].push_back(it.first);
        }
        string ans="";
        for(int i=bucket.size()-1;i>=0;i--){
            for(int j=0;j<bucket[i].size();j++)
                ans.append(i,bucket[i][j]);
        }
        return ans;
    }
};