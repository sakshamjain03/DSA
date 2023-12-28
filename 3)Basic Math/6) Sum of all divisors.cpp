int sumOfAllDivisors(int n){
	int sum=0;
	for(int i=1;i<=sqrt(n);i++){
			if(n%i == 0){
				int quo=n/i;
				if(i != quo){
					sum+=i+quo;
				}
			}
	}
	return sum;
}