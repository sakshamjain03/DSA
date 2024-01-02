void fibonacci(int n,int i,vector<int> &series){
    if(i==n+1) return;
    
    int num=series[i]+series[i-1];
    series.push_back(num);    
    fibonacci(n,i+1,series);
    
}

vector<int> generateFibonacciNumbers(int n) {
    vector<int> series;
    int i=1;
    series.push_back(0);
    if(n==1) return series;
    series.push_back(1);
    if(n==2) return series;    
    
    fibonacci(n-2,i,series);
    return series;
}