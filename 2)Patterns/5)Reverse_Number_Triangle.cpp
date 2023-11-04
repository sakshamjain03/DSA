// Reverse Number Triangle
// Problem Statement
// Sample Input 1:
// 3
// Sample Output 1:
// 1 2 3
// 1 2
// 1
// Sample Input 2 :
// 4
// Sample Output 2 :
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// Sample Input 3 :
// 7
// Sample Output 3 :
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
void nNumberTriangle(int n) {
    for(int i=n;i>0;i--){   // need 3 rows
        for(int j=1;j<=i;j++){  //need to start at 1 but column size must decrease
        //so w begin at 1 but keep the loop only till the value of current row number
            cout<<j<<" ";
        }
        cout<<endl;
    }
}