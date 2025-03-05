class Solution {
public:
    long long coloredCells(int n) {
        if(n==1)return 1;
        long long ans=0;
        for(int i=0;i<n;i++){
            ans=ans+4*i;
        }
        return ans+1;
    }
};

// n=1 1 4*0+1
// n=2 5 4*1+1
// n=3 13 4*3+1
// n=4 25 4*6+1
// n=5 41 4*9+4
