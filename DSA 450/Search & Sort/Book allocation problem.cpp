#include <bits/stdc++.h> 
bool isPossible(long long n,long long m,long long mid, vector<int> time){
	long long Daysum=0;
	long long countDays=1;
	for(long long i=0;i<m;i++){
		if(Daysum+time[i]<=mid){
			Daysum+=time[i];
		}
		else{
			countDays++;
			if(countDays>n || time[i]>mid){
				return false;
			}		
			Daysum=time[i];
		}
		
	}
	return true;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	long long ans=-1;
	long long start=0,end=0;
	long long sum=0;
	for(auto &it:time ){
		sum+=it;
	}
	end=sum;
	
	while(start<=end){
		long long mid=start+(end-start)/2;
		if(isPossible(n,m,mid,time)){
			ans=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return ans;
}