class Solution {
public:
    bool divisorGame(int n) {
        // bool alice=true;
        // for(int i=0;i<n;i++){
        //     if(n%i==0){
        //         n=n-i;
        //         alice!=alice;
        //         continue;
        //     }
        // }
        return n%2==0;
    }
};