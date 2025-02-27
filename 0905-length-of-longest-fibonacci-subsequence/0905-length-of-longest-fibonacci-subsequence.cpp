class Solution {
public:
    // int fun(vector<int>& arr,int i,int j,set<int>& s){
    //     if(i>=arr.size() || j>=arr.size())return 0;
    //     int ans=0;
    //     if(i!=j && s.find(arr[i]+arr[j])!=s.end())return ans=1+fun(arr,i+1,j+1,s);
    //     ans=max(ans,fun(arr,i+1,j,s));
    //     ans=max(ans,fun(arr,i,j+1,s));
    //     return ans;
    // }
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
        if(n<3)return 0;
        int maxlen=0;
        unordered_set<int> s(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=arr[i],b=arr[j],len=2;
                while(s.count(a+b)){
                    int next=a+b;
                    a=b;
                    b=next;
                    len++;
                }
                maxlen=max(len,maxlen);
            }
        }
        return maxlen<=2?0:maxlen;
    }
};