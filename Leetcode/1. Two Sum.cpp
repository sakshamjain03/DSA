// First Approach using two pointers- Does'nt work for all test cases
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int low=0,high=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(low<high){
            int sum=nums[low]+nums[high];
            if(sum==target){
                ans.push_back(low);
                ans.push_back(high);
            }
            else if(sum<target){
                low++;
            }
            else if(sum>target){
                high--;
            }
        }
    return ans;
    }
};

// Second Approach Bruteforce using two for loops TC- O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        return ans;
    }
};

// Using Hashmap TC-O(n) SC-O(n) Two For loops
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>record;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            record[nums[i]]=i;
        }
        for(int j=0;j<nums.size();j++){
            int complement=target-nums[j];
            if(record.count(complement) && record[complement]!=j){
                ans.push_back(j);
                ans.push_back(record[complement]);
                return ans;
            }
        }
        return {};
    }
};

// Using Hashmap TC-O(n) SC-O(n) One For loop
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>record;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
            if(record.count(complement)){
                ans.push_back(i);
                ans.push_back(record[complement]);
                return ans;
                }
            record[nums[i]]=i;        
        }
        return {};
    }
};
