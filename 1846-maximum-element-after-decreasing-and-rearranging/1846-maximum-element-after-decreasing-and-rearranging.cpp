class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int cnt=0;
        if(arr[0]!=1) arr[0]=1;
        for(int i=1;i<arr.size();i++){
            if(abs(arr[i] - arr[i - 1]) <= 1) continue;
            else arr[i]=arr[i-1]+1;
        } if(cnt==1) return arr[0]+arr.size()-1;
        return arr[arr.size()-1];
    }
};