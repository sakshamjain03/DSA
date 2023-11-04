// Problem Statement
// Sample Input 1:
// 3
// Sample Output 1:
//   *
//  ***
// *****
// Explanation Of Sample Input 1 :
// The first row contains two spaces, followed by a star.
// The second row contains one space, followed by three stars.
// The third row contains five stars.
// Sample Input 2 :
// 1
// Sample Output 2 :
// *
#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    for(int i=n;i>0;i--){
        for(int j=1;j<i;j++){   //need n-1 spaces to the both sides and then
        // continously reduce spaces by 1
            cout<<" ";
        }
        for(int a=n-i;a>=0;a--){
            cout<<"*";
        }
        for(int b=n-i;b>0;b--){
            cout<<"*";
        }
        for(int j=1;j<i;j++){   //need n-1 spaces to the both sides and then
        // continously reduce spaces by 1
            cout<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    nStarTriangle(n);
    return 0;
}