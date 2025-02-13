#define ll long long 
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans=0;
        priority_queue<ll,vector<ll>,greater<ll>> q(nums.begin(),nums.end());
        while(q.top()<k){
            ll a=q.top();
            q.pop();
            ll b=q.top();
            q.pop();
            ll c=min(a,b)*2+max(a,b);
            q.push(c);
            ans++;
        }
        return ans;
    }
};