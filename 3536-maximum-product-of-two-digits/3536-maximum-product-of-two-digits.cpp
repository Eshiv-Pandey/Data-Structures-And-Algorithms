class Solution {
public:
    int maxProduct(int n) {
        int larg=0,med=0;
        while(n>0){
            int temp=n%10;
            if(temp>=larg){
                med=larg;
                larg=temp; 
            }else if(temp>med) med=temp;
            n=n/10;
        }return larg*med;
    }
};