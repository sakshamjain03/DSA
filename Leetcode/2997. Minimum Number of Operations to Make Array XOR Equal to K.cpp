class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xorVal=0;
        int count=0;
        for(int it:nums){
            xorVal^=it;
        }
        while(k>0 || xorVal>0){
            if(k&1!=xorVal&1){
                count++;
            }
            k>>1;
            xorVal>>1;            
        }
        return count;
    }    
};