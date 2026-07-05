class Solution {
public:
    int maxDepth(string s) {
        int bal=0,maxbal=0;
        for(auto it:s){
            if(it=='('){
                bal++;
                maxbal=max(maxbal,bal);
            }else if(it==')') bal--;
        }return maxbal;
    }
};