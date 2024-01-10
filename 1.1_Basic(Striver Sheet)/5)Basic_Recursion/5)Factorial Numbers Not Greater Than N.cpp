// coding ninjas solution:
// Recursive
void factorialRec(long long n,int x,vector<long long> &answer){
    int dig=1;
    for(int i=1;i<=x;i++){
        dig*=i;
}
    if(dig>n) return;
    x++;
    answer.push_back(dig);
    factorialRec(n,x,answer);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> answer;
    int x=1;
    factorialRec(n,x,answer);
    return answer;
}
