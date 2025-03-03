class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        int c=0;
        for(int  i: nums){
            if(i<pivot)ans.push_back(i);
            if(i==pivot)c++;
        }
        while(c--)ans.push_back(pivot);
        for(int i :nums){
            if(i>pivot)ans.push_back(i);
        }
        return ans;
    }
};