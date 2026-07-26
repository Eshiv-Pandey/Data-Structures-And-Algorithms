class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1;
        int water=0,leftmax=INT_MIN,rightmax=INT_MIN;
        while(l<r){
            leftmax=max(leftmax,height[l]);
            rightmax=max(rightmax,height[r]);
            if(leftmax<=rightmax){
                water+=leftmax-height[l];
                l++;
            }else{
                water+=rightmax-height[r];
                r--;
            }
        }return water;
    }
};