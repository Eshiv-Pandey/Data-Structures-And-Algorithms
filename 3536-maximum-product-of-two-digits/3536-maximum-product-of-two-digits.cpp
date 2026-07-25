class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        int maxi=INT_MIN;
        while(n>0){
            int temp=n%10;
            arr.push_back(temp);
            n=n/10;
        }
        for(int i=0;i<arr.size();i++){
            int prod=INT_MIN;
            for(int j=i+1;j<arr.size();j++){
                prod=arr[i]*arr[j];
                maxi=max(maxi,prod);
            }
        }return maxi;
    }
};