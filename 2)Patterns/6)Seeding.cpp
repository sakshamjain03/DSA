// Seeding
// Problem Statement
// Sample Input 1:
// 3
// Sample Output 1:
// * * *
// * *
// *
// Sample Input 2 :
// 1
// Sample Output 2 :
// *
// Sample Input 3 :
// 4
// Sample Output 3 :
// * * * *
// * * *
// * *
// *
void seeding(int n) {
	for(int i=n;i>0;i--){
		for(int j=i;j>0;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
}