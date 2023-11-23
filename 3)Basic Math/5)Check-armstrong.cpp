bool checkArmstrong(int n){
	int temp=n,count=0,sum=0;
	vector<int> dig;
	while(temp!=0){
		count++;
		temp/=10;
	}
	temp=n;
	while(temp!=0){
		int dig=temp%10;
		sum+=pow(dig,count);
		temp/=10;
	}
	return (sum==n);
}