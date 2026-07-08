class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            vector<int> arr(26,0);
            
            for(int j=i;j<s.size();j++){
                arr[s[j]-'a']++;
                int mini=INT_MAX,maxi=INT_MIN;
                for(auto it:arr){
                    if(it>0){
                        maxi=max(maxi,it);
                        mini=min(mini,it);
                    }
                }sum+=maxi-mini;
            }
            
            
        }return sum;
    }
};