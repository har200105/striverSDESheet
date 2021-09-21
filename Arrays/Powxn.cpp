class Solution {
public:
    double myPow(double x, int n) {
        double anss =1.0;
        long long ans =  n;
        if(ans<0){
            ans=-1*ans;
        }
        while(ans){
            if(ans%2){
                anss=anss*x;
                ans=ans-1;
            }else{
                x=x*x;
                ans=ans/2;
            }
        }
        
        if(n<0){
            anss = double(1.0)/double(anss);
        }
        return anss;
    }
};