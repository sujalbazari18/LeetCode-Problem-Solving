class Solution {
public:
    vector<int> findOrder(int V, vector<vector<int>>& adj) {
            vector<vector<int>> l(V);
            vector<int> in(V,0);
	        for(auto& j : adj) {
                int x=j[0];
                int y=j[1];
                l[y].push_back(x);
                in[x]++;
            }
	    queue<int> q;
	    for(int i=0;i<V;i++){
	        if(in[i]==0){
	            q.push(i);
	        }
	    }
	    vector<int> h;
	    vector<int>ans;
	    while(!q.empty()){
	        int j=q.front();
	        q.pop();
            h.push_back(j);
	        ans.push_back(j);
	        for(int x: l[j]){
	            in[x]--;
	            if(in[x]==0){
	                q.push(x);
	            }
	        }
	    }
        return (h.size()==V) ? h : vector<int>();
    }
};