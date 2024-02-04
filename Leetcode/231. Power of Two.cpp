// By modulus method:-
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int m=n,bin[32],count=0;
        while(m){
            int last=m%2;
            m/=2;
            if(last==1){
                count++;
            }
        }
        if(count==1){
        return true;
    }
    return false;
    }
    
};
// alternate method