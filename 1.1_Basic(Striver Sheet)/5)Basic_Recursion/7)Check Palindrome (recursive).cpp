int Reverse(int n,int i,string& str){
    if(i>=n) return true;
    if(str[i]!=str[n]){
        return false;
    }
    Reverse(n-1,i+1,str);
}
bool isPalindrome(string& str) {
    int n=str.size();
    if(n==0 || n==1){
        return true;
    }
    return Reverse(n-1,0,str);
}
