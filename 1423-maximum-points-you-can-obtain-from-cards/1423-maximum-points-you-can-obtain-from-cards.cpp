class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0,maxi=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }maxi=sum;
        if(k==cardPoints.size()) return maxi;
        int i=k-1;
        for(int j=cardPoints.size()-1;j>=cardPoints.size()-k;j--){
            sum=sum-cardPoints[i--];
            sum=sum+cardPoints[j];
            maxi=max(sum,maxi);
        }return maxi;
    }
};