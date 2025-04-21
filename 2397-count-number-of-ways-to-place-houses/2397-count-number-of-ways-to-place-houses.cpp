class Solution {
public:
    int m=1e9+7;
    int countHousePlacements(int n) {
        if(n==1)return 4;
        int a=2;
        int b=3;
        for(int i=0;i<n-2;i++){
            int c=(a+b)%m;
            a=b;
            b=c;
        }
        return (1LL*b*b)%m;
    }
};