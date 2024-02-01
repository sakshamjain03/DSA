bool purple(string &s) {
    int n=s.size();
    int rCount=0,bCount=0;
   for(int i=0;i<n;i++){
       if(s[i]=='R'){
           rCount++;
       }
       else{
           bCount++;
       }
   }
   if(rCount>=bCount && bCount!=0){
       return true;
   }
   if(bCount>=rCount && rCount!=0){
       return true;
   }
   return false;
}