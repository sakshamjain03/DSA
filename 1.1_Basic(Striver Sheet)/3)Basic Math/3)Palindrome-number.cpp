bool palindrome(int n)
{   int temp=n,rev,dig;
    while(temp!=0){
        dig=temp%10;
        rev=(rev*10)+dig;
        temp/=10;
    }
    if(rev==n){
        return 1;
    }
    else{
        return 0;
    }
}

// leetcode
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else{
    long long rev=0,temp=x;
    while(temp!=0){
        int dig=temp%10;
        rev=(rev*10)+dig;
        temp/=10;
    }
    return rev==x;
}
    }
};