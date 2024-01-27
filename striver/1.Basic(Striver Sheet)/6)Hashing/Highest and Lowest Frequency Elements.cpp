// Given an array 'v' of 'n' numbers.
// Your task is to find and return the highest and lowest frequency elements.
// If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.

vector<int> getFrequencies(vector<int>& v) {
    map<int,int> map;
    int n;
    vector<int> ans;
    for(auto&it:v){
        map[it]++;
        n++;
    }

    int minFreq=n,maxFreq=0,minEle=0,maxEle=0;
    for(auto it:map){
        int freq=it.second;
        int element=it.first;
    
    if(freq>maxFreq){
        maxEle=element;
        maxFreq=freq;
    }
    
    if(freq<minFreq){
        minFreq=freq;
        minEle=element;        
    }
    
}
    ans.push_back(maxEle);
    ans.push_back(minEle);
    return ans;
}