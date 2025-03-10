class Solution {
public:
    int fun(int k,vector<char>& chars,int ans){
        int n=ans;
        vector<int> temp;
        while(k>0){
            temp.push_back((k%10)+'0');
            k=k/10;
        }
        for(int i=temp.size()-1;i>=0;i--){
            chars[ans++]=temp[i];
        }
        return ans-n;
    }
    int compress(vector<char>& chars) {
        int n=chars.size();
        if(n==0)return 0;
        int ans=0;
        int k=1;
        char ch=chars[0];
        for(int i=1;i<n;i++) {
            if(ch==chars[i]) {
                k++;
            }else{
                chars[ans++]=ch;
                if(k>1){
                    ans+=fun(k,chars,ans);
                }
                ch=chars[i];
                k=1;
            }
        }
        chars[ans++]=ch;
        if(k>1) {
            ans+=fun(k,chars,ans);
        }
        return ans;
    }
};
