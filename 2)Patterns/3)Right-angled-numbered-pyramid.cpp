// N-Triangles
// Problem Statement
// Sample Input 1:
// 3
// Sample Output 1:
// 1
// 1 2 
// 1 2 3
// Sample Input 2 :
// 1
// Sample Output 2 :
// 1
void nTriangle(int n) {
	for(int i=0;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}