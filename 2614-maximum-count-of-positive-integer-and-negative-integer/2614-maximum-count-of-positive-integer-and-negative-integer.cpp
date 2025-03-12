class Solution {
public:
    int binarY(vector<int>& nums){
        int low=0,high=nums.size();
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[mid]>0){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
    int binary(vector<int>& nums){
        int low=0,high=nums.size()-1;
        int result=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<0){
                result=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return result;
    }
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        return max(n-binarY(nums),binary(nums)+1);
    }
};