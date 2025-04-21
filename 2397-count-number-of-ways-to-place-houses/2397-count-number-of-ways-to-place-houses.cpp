class Solution {
public:
    int m=1e9+7;
    int countHousePlacements(int n) {
        if(n==1)return 4;
        vector<int> v(n);
        v[0]=2;
        v[1]=3;
        for(int i=2;i<n;i++){
            v[i]=(v[i-1]+v[i-2])%m;
        }
        return (1LL*v[n-1]*v[n-1])%m;
    }
};