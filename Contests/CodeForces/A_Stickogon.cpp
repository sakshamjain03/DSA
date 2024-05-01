#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int numSticks=0;
        cin>>numSticks;
        int leng[numSticks]={};
        for(int j=0;j<numSticks;j++){
            cin>>leng[j];
        }

        int ans=0;
        sort(leng, leng + numSticks);
        map<int,int>list;
        for(int a=0;a<numSticks;a++){
            list[leng[a]]++;
        }
        // for(auto it:list){
        //     if(it.second>=3){
        //         ans++;
        //         it.second-=3;
        //     }
        // }
        for (auto it : list) {
            if (it.second >= 3) {
                // int sides = min(it.second / 3, it.first - 1);
                ans += 1;
            }
        }
        cout<<ans<<endl;

    }      
}
