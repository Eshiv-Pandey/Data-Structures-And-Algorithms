class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mp;
        int l=0,r=0,maxi=1;
        while(r<fruits.size()){
            mp[fruits[r]]++;
            if(mp.size()>2){
                    mp[fruits[l]]--;
                    if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                    l++;
            }maxi=max(maxi,r-l+1);
            r++;
        }return maxi;
    }
};