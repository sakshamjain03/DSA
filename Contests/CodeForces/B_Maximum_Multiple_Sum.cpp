#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        int ans=0;
        int max=0;
        for(int i=2;i<=x;i++){
            int high=floor(x/i);
            int temp=0;
            for(int j=1;j<=high;j++){
                temp+=i*j; 
            }
            if(temp>max){
                max=temp;
                ans=i;
            }
            
        }
        
        cout<<ans<<endl;
    }
    return 0;
}