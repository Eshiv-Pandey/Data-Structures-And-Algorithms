class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> st;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if(i==j||j==k||k==i) continue;
                    int n=digits[i]*100+digits[j]*10+digits[k];
                    if(n>=100 && n%2==0){
                        st.insert(n);
                    }
                }
            }
        }return st.size();
    }
};