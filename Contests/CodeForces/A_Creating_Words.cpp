#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // cin.ignore(); // Ignore the newline character after reading n

    for (int i = 0; i < n; i++) {
        string word1, word2;
        cin>>word1;
        cin>>word2;
        
        char temp=word1[0];
        word1[0]=word2[0];
        word2[0]=temp;
        cout<<word1<<" "<<word2<<endl;
    }
    return 0;
}