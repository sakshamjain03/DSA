// By using sort function TC- O(nlogn) SC- O(1)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};
// by counting the number of 0,1,2 and then filling the array with 0,1,2
class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>record;
        for(auto&it:nums){
            record[it]++;
        }
        for(int i=0;i<record[0];i++){
            nums[i]=0;
        }
        for(int j=record[0];j<record[0]+record[1];j++){
            nums[j]=1;
        }
        for(int k=record[0]+record[1];k<record[0]+record[1]+record[2];k++){
            nums[k]=2;
        }
    }
};

// by three pointers approach TC- O(n) SC- O(1)
// dutch national flag algorithm
// using if else
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,med=0,high=nums.size()-1;
        while(med<=high){
            if(nums[med]==0){
                    swap(nums[low],nums[med]);
                    low++,med++;
            }
            else if(nums[med]==1){
                med++;
            }
            else{
                swap(nums[med],nums[high]);
                high--;
            }    
        }
    }
};
// using switch
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0,med=0,high=nums.size()-1;
        while(low<=med && med<=high){
            switch(nums[med]){
                case 0:
                    swap(nums[low],nums[med]);
                    low++,med++;
                    break;

                case 1:
                    med++;
                    break;

                case 2:
                    swap(nums[med],nums[high]);
                    high--; 
                    break;    
            }
        }
    }
};