//  For loop and two pointer approach
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int low=i+1,high=nums.size()-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0){
                    vector<int> temp={nums[i],nums[low],nums[high]};
                    // temp.push_back(nums[i]);
                    // temp.push_back(nums[low]);
                    // temp.push_back(nums[high]);
                    ans.push_back(temp);
                    while(low<high && nums[low]==temp[1]){
                        low++;
                    }
                    while(low<high && nums[high]==temp[2]){
                        high--;
                    }
                }
                else if(sum<0){
                    low++;
                }
                else if(sum>0){
                    high--;
                }
            }
            while(i+1<nums.size() && nums[i+1]==nums[i]){
                i++;
            }
        }
        return ans;
    }
};