int removeDuplicates(vector<int> &arr, int n) {
        vector<int> ans;
        for(int i=0;i<=n-1;i++){
			if(arr[i]!=arr[i+1] ){
				ans.push_back(arr[i-1]);
			}
		}
		int count=ans.size();
		return count;
}