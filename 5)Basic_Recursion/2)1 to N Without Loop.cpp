// GFG
class Solution
{
public:
    void printTillN(int N)
    {
        if(N==0) return;
        
        printTillN(N-1);
        cout<<N<<" ";
    }
};

// Coding Ninjas- they used vector instead of array even though they mentioned array in question
void recursion(int x,vector<int>& array){
    if(x==0) return;    //base case

    recursion(x-1,array);
    
    array.push_back(x);
}

vector<int> printNos(int x) {
    vector<int> array;
    recursion(x,array);

    return array;
}
