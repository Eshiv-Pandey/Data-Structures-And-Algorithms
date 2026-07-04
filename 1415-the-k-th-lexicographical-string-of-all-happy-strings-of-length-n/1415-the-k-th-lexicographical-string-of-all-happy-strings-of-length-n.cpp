class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string> ans{"a","b","c"};
        if(n==1 && ans.size()>=k) return ans[k-1];
        for(int i=2;i<=n;i++){
            vector<string> temp;
            for(int j=0;j<ans.size();j++){
                if(ans[j].back()=='a'){
                    temp.push_back(ans[j]+'b');
                    temp.push_back(ans[j]+'c');
                }else if(ans[j].back()=='b'){
                    temp.push_back(ans[j]+'a');
                    temp.push_back(ans[j]+'c');
                }else{
                    temp.push_back(ans[j]+'a');
                    temp.push_back(ans[j]+'b');
                }
            }ans=temp;
            
        }if(k<=ans.size()) return ans[k-1];
        return "";
    }
};