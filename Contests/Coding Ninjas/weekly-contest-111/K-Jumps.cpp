long long kJumps(int n, int k, vector <int> &a) {
   int sum=0;

   for(int i=0;i<n;i++){
      int temp=0;
      for(int j=i;j<n;j+=k){
         temp+=a[j];
      }
      if(temp>sum){
         sum=temp;
      }
   }
   return sum;
}