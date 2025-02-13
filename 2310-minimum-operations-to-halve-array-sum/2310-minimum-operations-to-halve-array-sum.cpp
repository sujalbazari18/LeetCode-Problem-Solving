#define ll long long
class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> q(nums.begin(),nums.end());
        double sum=accumulate(nums.begin(),nums.end(),0LL);
        double current=sum;
        double half=sum/2.0;
        int ans=0;
        while(current>half){
            double a=q.top();
            q.pop();
            q.push(a/2.0);
            // for(auto& i:q){
            //     sum2+=i;
            // }
            current-=(a/2.0);
            ans++;
        }
        return ans;
    }
};