vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> array(n);
    for(auto& it:nums){
        if(it<=n){
        array[it-1]++;
        }
    }
    return array;
}