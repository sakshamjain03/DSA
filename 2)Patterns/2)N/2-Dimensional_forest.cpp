// Sample Input 1:
// 3
// Sample Output 1:
// * 
// * *
// * * *
// Explanation Of Sample Input 1 :
// For N = 3, fill all the rows and columns in the lower triangle of 3x3 matrix with ‘*’.
// Sample Input 2 :
// 1
// Sample Output 2 :
// * 

#include <iostream>
using namespace std;

void nForest(int n) {
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}
}


int main() {
    int n;
    cin>>n;
    nForest(n);
    return 0;
}