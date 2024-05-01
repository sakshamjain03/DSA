//Using book allocation problem concept
int isPossible(int mid,vector<int>boards,int k,int n){
    int countPainters=1,painterSum=0;
    for(int i=0;i<n;i++){
        if(painterSum+boards[i]<=mid){
            painterSum+=boards[i];
        }
        else{
            countPainters++;
            if(countPainters>k || boards[i]>mid){
                return false;
            }
            painterSum=boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int start=0;
    int sum=0;
    for(auto&it:boards){
        sum+=it;
    }
    int end=sum;
    int n=boards.size();
    int mid=start+(end-start)/2;
    int ans=0;
    while(start<=end){
        if(isPossible(mid,boards,k,n)){ 
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}