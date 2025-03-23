class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto& a:arr)mp[a]++;
        set<int> a;
        for(auto& i:mp){
            a.insert(i.second);
        }
        return mp.size()==a.size();
    }
};