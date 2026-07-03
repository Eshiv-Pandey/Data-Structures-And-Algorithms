class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            int flag=0;
            for(auto it:words[i]){
                if(allowed.find(it)<allowed.size()){
                    continue;
                }else{
                    flag=1;
                    break;
                }
            }if(flag==0) cnt++;
        }return cnt;
    }
};