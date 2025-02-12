class Solution {
public:
    unordered_map<string,vector<pair<string,double>>> adj;
    void dfs(string src,string des,unordered_set<string>& v,double prod,double& ans){
        if(v.find(src)!=v.end())return;
        v.insert(src);
        if(src==des){
            ans=prod;
            return;
        }
        for(auto& i:adj[src]){
            if(v.find(i.first)==v.end()){
                dfs(i.first,des,v,i.second*prod,ans);
            }
        }
    }
    vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& val, vector<vector<string>>& q) {
        int n=eq.size();
        for(int i=0;i<n;i++){
            adj[eq[i][0]].push_back({eq[i][1],val[i]});
            adj[eq[i][1]].push_back({eq[i][0],1.0/val[i]});
        }
        vector<double> result;
        for(int i=0;i<q.size();i++){
            string src=q[i][0],des=q[i][1];
            double ans=-1.0,prod=1.0;
            if(adj.find(src)!=adj.end()){
                unordered_set<string> v;
                dfs(src,des,v,prod,ans);
            }
            result.push_back(ans);
        }
        return result;
    }
};