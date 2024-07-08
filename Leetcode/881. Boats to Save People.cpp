// Disables Input output Syncronization to reduce overhead and speed up the code
const int ZERO = []()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	return 0;
}();
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int low=0,high=people.size()-1;
        int boats=0;
        while(low<=high){
            if(people[low]+people[high]<=limit){
                low++;
                high--;
                boats++;
            }
            else if(people[low]+people[high]>limit){
                high--;
                boats++;
            }
        }
        return boats;
    }
};