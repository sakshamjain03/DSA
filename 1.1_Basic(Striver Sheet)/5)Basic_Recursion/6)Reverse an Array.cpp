void reverseArr(int n,vector<int> nums,vector<int> &reverse){
   if(n<0) return;
   reverse.push_back(nums[n]);
   reverseArr(n-1,nums,reverse);
}
vector<int> reverseArray(int n, vector<int> &nums)
{
   vector<int> reverse;
   reverseArr(n-1,nums,reverse);
   return reverse;
}
