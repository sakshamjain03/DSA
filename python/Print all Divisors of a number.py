from typing import List
import math
def printDivisors(n: int) -> List[int]:
    ans=[]
    if n<1:
        return "Error"
    a=math.floor(math.sqrt(n))
    for i in range(1,a+1):
        if n%i==0:
            ans.append(i)
            if math.floor(n/i)!=i:
                ans.append(math.floor(n/i))
    ans.sort()
    return ans