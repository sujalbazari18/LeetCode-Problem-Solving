#define ll long long 
class Solution {
public:
    bool check(ll mid,int cars,vector<int>& ranks){
        ll totalcars=0; 
        for(int r:ranks){
            ll a=(ll)sqrt(mid/double(r));
            totalcars+=a;
            if(totalcars>=cars)return true;
        }
        return false;
    }
    long long repairCars(vector<int>& ranks, int cars) {
        ll low=1,high=1e14;
        ll ans=-1;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(check(mid,cars,ranks)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
