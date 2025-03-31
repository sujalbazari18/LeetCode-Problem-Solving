class Solution {
public:
    string predictPartyVictory(string senate) {
        int ans=0;
        for(int i=0;i<senate.size();i++){
            char c=senate[i];
            if(c=='R'){
                if(ans<0){
                    senate.push_back('D');
                }
                ans++;
            }else{
                if(ans>0)senate.push_back('R');
                ans--;
            }
        }
        return ans>0?"Radiant":"Dire";
    }
};