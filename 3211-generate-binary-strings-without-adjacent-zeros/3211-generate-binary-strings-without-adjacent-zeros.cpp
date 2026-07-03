class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> ans{"0","1"};
        if(n==1) return ans;
        for(int i=2;i<=n;i++){
            vector<string> temp;
            for(int j=0;j<ans.size();j++){
                if(ans[j].back()=='1'){
                    temp.push_back(ans[j]+"1");
                    temp.push_back(ans[j]+"0");
                }else temp.push_back(ans[j]+"1");
            }ans=temp;
        }return ans;
    }
};