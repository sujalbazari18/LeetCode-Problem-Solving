#define ll long long
class Solution {
public:
    int m=1e9+7;
    ll count(ll n,ll x){
        if(n==0)return 1;
        ll ans=count(n/2,x);
        ans*=ans;
        ans%=m;
        if(n%2==1){
            ans*=x;
            ans%=m;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        ll odd=n/2;
        ll even=n/2+n%2;
        return (count(odd,4)*count(even,5))%m;
    }
};