class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum,prod=1,last;
        while(n!=0){
            last=n%10;
            sum+=last;
            prod*=last;
            n/=10;
        }
        int ans=prod-sum;
        return ans;
    }
};