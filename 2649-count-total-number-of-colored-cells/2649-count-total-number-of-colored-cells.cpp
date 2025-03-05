class Solution {
public:
    long long coloredCells(int n) {
        // if(n==1)return 1;
        // long long ans=0;
        // for(int i=0;i<n;i++){
        //     ans=ans+4*i;
        // }
        long long i=n;
        return 2*(i-1)*i+1;
    }
};
// n=1 