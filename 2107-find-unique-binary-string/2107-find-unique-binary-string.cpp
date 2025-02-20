class Solution {
public:
string ans;
    void fun(int i,int n,string s,set<string>& mp){
        if(i==n){
            if(!mp.count(s))ans=s;
            return;
        }
        if(ans!="")return;
        fun(i+1,n,s+'0',mp);
        fun(i+1,n,s+'1',mp);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        set<string> mp;
        for(auto k:nums){
            mp.insert(k);
        }      
        int n=nums.size();  
        fun(0,n,"",mp);
        return ans;
    }
};