class Solution {
public:
    bool fun(string n,int totalSum,int current,int i){
        if(i==n.size())return totalSum==current;
        int l=0;
        for(int j=i;j<n.size();j++){
            l=l*10+(n[j]-'0');
            if(l>totalSum)break;
            if(fun(n,totalSum,current+l,j+1))return true;
        }
        return false;
    }
    int punishmentNumber(int n) {
        int ans=0;
            for(int i=1;i<=n;i++){
                int l=i*i;
                string s=to_string(l);
                if(fun(s,i,0,0))
                ans+=l;
            }
        return ans;
    }
};