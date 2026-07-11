class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int cnt=0;
        vector<int> ans;
        set<int> s1,s2;
        for(int i=0;i<A.size();i++){
            if(A[i]==B[i]) ans.push_back(++cnt);
            
            else if(s1.empty() || s2.empty()) ans.push_back(0);
            else {
                s1.insert(A[i]);
                s2.insert(B[i]);
                
                if(s1.find(B[i])!=s1.end()) cnt++;
                if(s2.find(A[i])!=s2.end()) cnt++;
                ans.push_back(cnt);
                continue;
            }
            s1.insert(A[i]);
            s2.insert(B[i]);

        }return ans;
    }
};