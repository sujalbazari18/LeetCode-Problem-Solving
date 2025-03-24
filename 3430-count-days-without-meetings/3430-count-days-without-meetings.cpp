class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int start=meetings[0][0];
        int end=meetings[0][1];
        int busy=0;
        for(int i=1;i<meetings.size();i++){
            int s=meetings[i][0],e=meetings[i][1];
            if(s<=end+1)end=max(end,e);
            else{
                busy+=(end-start+1);
                start=s;
                end=e;
            }
        }
        busy+=(end-start+1);
        return days-busy;


        // vector<int> f(days+2,0);
        // for(auto& a:meetings){
        //     int start=a[0],end=a[1];
        //     f[start]+=1;
        //     f[end+1]-=1;
            
        // }
        // int active=0,free=0;
        // for(int i=1;i<=days;i++){
        //     active+=f[i];
        //     if(active==0)free++;
        // }
        // return free;
    }
};