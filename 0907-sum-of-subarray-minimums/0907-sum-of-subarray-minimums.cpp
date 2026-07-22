class Solution {
public:
    vector<int> psee(vector<int>& arr){
        stack<int> st;
        vector<int> psee(arr.size());
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
            psee[i]=st.empty()?-1:st.top();
            st.push(i);
        }return psee;
    }
    vector<int> nse(vector<int>& arr){
        stack<int> st;
        vector<int> nse(arr.size());
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
            nse[i]=st.empty()?arr.size():st.top();
            st.push(i);
        }return nse;
    }

    int sumSubarrayMins(vector<int>& arr) {
        long long sum=0;
        int MOD=(int)1e9+7;

        vector<int> prev=psee(arr);

        vector<int> next=nse(arr);

        for(int i=0;i<arr.size();i++){
            int left=prev[i],right=next[i];
            sum=(sum+((1LL*(right-i)*(i-left)*arr[i])%MOD))%MOD;
        }return (int)sum;
    }
};