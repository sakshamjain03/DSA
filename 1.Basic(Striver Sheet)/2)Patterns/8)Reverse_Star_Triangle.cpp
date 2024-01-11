// Problem Statement
// Sample Input 1:
// 3
// Sample Output 1:
// *****
//  ***
//   *
// Explanation Of Sample Input 1 :
// The first row contains five stars.
// The second row contains one space, followed by three stars.
// The third row contains two spaces, followed by a star.
// Sample Input 2 :
// 1
// Sample Output 2 :
#include <iostream>
using namespace std;

// void nStarTriangle(int n) {
//     for(int i=n;i>0;i--){
//         for(int a=i;a<n;a++){
//             cout<<" ";
//         }
//         for(int j=0;j<i;j++){
//         cout<<"*";
//         }
//         for(int j=1;j<i;j++){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
// }
void nStarTriangle(int n) {
    for(int i=0;i<n;i++){
        int gap=0, star=2*n-1;
        for(int a=0;a<gap;a++){
            cout<<" ";
        }
        for(int j=gap;j<gap+star;j++){
        cout<<"*";
        }
        cout<<endl;
        gap++;
        star-=2;
    }
}

int main() {
    int n;
    cin>>n;
    nStarTriangle(n);
    return 0;
}