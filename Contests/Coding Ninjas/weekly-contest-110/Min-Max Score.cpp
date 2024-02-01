int maximumScore(int n, vector<int> v) {
    sort(v.begin(),v.end());
    int a=0;
    a=v[0]+v[(n/2)];
    return a;
}