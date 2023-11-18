int countDigits(int n){
	int temp=n,count=0;
	while(temp!=0){
		int last=temp%10;
		if(last!=0){
			if(n%last==0){
				count++;
			}
		}
		temp/=10;
	}	
	return count;
}