class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int ans;
        for(int i=0;i<32;i++){
            ans=n;
            n>>1;
            ans<<1;
        }
        return ans;
    }
};