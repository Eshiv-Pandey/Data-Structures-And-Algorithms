class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        set<char> st;
        for(auto it:word) st.insert(it);
        int s=st.size();
        if(s<=8) return s;
        
        else{
            int i=1;
            while(s>=8){
                ans+=8*i;
                i++;
                s=s-8;
            }ans=ans+(s)*i;
        }return ans;

    }
};