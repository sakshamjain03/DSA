// Triangle
// Sample Input 1:
// 3
// Sample Output 1:
// 1 
// 2 2 
// 3 3 3
// Sample Input 2 :
// 1
// Sample Output 2 :
// 1

void triangle(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}