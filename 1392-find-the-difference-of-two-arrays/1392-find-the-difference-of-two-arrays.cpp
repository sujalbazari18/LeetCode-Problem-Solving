class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1,s2;
        for(auto& a:nums1)s1.insert(a);
        for(auto& b:nums2)s2.insert(b);
        vector<int> r1,r2;
        for(auto& a:s1){
            if(s2.count(a)==0){
                r1.push_back(a);
            }
        }
        for(auto& a:s2){
            if(s1.count(a)==0){
                r2.push_back(a);
            }
        }
        return {r1,r2};
    }
};