#include <bits/stdc++.h>
using namespace std;

void check(char array[],int& count,int i){
    
        if (count == 3) {
            cout << "YES" << endl;
            return;
        } if (i == 6){
            cout << "NO" << endl;
            return;
        }
    

    if (array[i] == 'W' || array[i] == 'w') {
        count++;
    } else {
        count = 0;
    }

    check(array, count, i + 1);
}
int main() {
	int n=0;
	cin>>n;
	for(int j=0;j<=n-1;j++){
	    int count=0;
	    char array[6]={};
    	for(int i=0;i<=5;i++){
	        cin>>array[i];
    	}
	check(array,count,0);
}
}
