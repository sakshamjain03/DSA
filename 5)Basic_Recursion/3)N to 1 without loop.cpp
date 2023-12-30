// Coding Ninjas
void recursion(int x,vector<int>& array){
    if(x==0) return;

    array.push_back(x);
    recursion(x-1,array);
}

vector<int> printNos(int x) {
    vector<int> array;
    recursion(x,array);
    return array;
}