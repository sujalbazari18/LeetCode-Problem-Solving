class Solution {
public:
    bool divisorGame(int n) {
        bool alice=false;
        while(n>1){
            bool f=false;
            for(int i=1;i<n;i++){
                if(n%i==0){
                    n=n-i;
                    alice=!alice;
                    f=true;
                    break;
                }
            }
            if(!f)break;
        }
        return alice;
    }
};