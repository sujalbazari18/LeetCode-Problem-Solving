class Solution {
public:
    bool isPrime(int n){
        if(n<=1)return false;
        if(n==2)return true;
        if(n%2==0)return false;
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0)return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        int first=-1,second=-1,minS=INT_MAX,preprime=-1;;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                if(preprime!=-1){
                    int k=i-preprime;
                    if(k<minS){
                        first=preprime;
                        second=i;
                        minS=k;
                    }
                }
                preprime=i;
            }
        }
        return {first,second};
    }
};