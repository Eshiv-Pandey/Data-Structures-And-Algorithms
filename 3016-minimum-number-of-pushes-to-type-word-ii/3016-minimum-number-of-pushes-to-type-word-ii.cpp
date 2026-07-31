class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        map<char,int> mp;
        for(int i=0;i<word.size();i++) mp[word[i]]++;
        vector<pair<char,int>> v(mp.begin(),mp.end());
        
        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        int j=1,count=0;
        for(int i=0;i<v.size();i++){
            if(count<8){
                count++;
            }else{
                count=1;
                j++;
            } 
            ans=ans+v[i].second*j;
        }return ans;
         
    }
};