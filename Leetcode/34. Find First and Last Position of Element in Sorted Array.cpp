// Using for loop traversing enitre vector mind the nested IFs for index based position as they may fail with edge cases 

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int>ans={-1,-1};
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(i-1<0 || nums[i-1]!=target){
                    ans[0]=i;
                }
                if(i+1==nums.size() || nums[i+1]!=target){
                    ans[1]=i;
                }
            }
        }
        return ans;
    }
};

// Using Binary Search
class Solution {
public:
    int firstOcc(vector<int>& nums, int target){
        int low=0,high=nums.size()-1;
        int mid=low+(high-low)/2;
        int ans=-1;
        while(low<=high){
            if(nums[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(target>nums[mid]){ //move  to right
                low=mid+1;
            }
            else if(target<nums[mid]){ // move to left
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }
    int secOcc(vector<int>& nums, int target){
        int low=0,high=nums.size()-1;
        int mid=low+(high-low)/2;
        int ans=-1;
        while(low<=high){
            if(nums[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(target>nums[mid]){ //move  to right
                low=mid+1;
            }
            else if(target<nums[mid]){ // move to left
                high=mid-1;
            }
            mid=low+(high-low)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first=firstOcc(nums,target);
        int sec=secOcc(nums, target);
        ans.push_back(first);
        ans.push_back(sec);
        return ans;
    }
};