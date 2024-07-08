// Fails one test case

#include <bits/stdc++.h> 
vector<pair<char,int>> duplicate_char(string s, int n){
    // Write your code here.
    vector<pair<char,int>>ans;
    map<char,int>record;
    for(char ch:s){
        record[ch]++;
    }
    for(auto it:record){
        if(it.second>1){
            pair<char,int>temp(it.first,it.second);
            ans.push_back(temp);
        }
    }
    return ans;
}