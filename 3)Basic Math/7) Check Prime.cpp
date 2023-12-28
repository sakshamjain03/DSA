// Brute force
 bool isPrime(int n)
{
    int x=0;
    if(n<=1){
        return false;
        }
    if(n==2 || n==3){
        return true;
    }
    if(n)
    	for(int i=2;i<=sqrt(n);i++){
            x=n%i;
            if(x==0){
                return false;
                break;
            }
        }
        // if(x!=0){
            return true;
        // }
        
}


// Optimal
bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
     
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 6; i <= sqrt(n); i = i + 6)
        if (n % (i-1) == 0 || n % (i + 1) == 0)
            return false;
 
    return true;
}



