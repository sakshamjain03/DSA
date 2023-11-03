// Sample Input 1:
// 3
// Sample Output 1:
// * * *
// * * *
// * * *
// Explanation Of Sample Input 1 :
// For N = 3, fill all the rows and columns in 3x3 matrix with ‘*’.
// Sample Input 2 :
// 1
// Sample Output 2 :
// *
// Sample Input 3 :
// 4
// Sample Output 3 :
// * * * *
// * * * *
// * * * *
// * * * *

#include <iostream>
using namespace std;

void nForest(int n) {
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
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