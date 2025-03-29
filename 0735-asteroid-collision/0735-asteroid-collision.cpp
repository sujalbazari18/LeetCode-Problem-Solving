class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i:asteroids){
            bool d=false;
            while(!st.empty() && st.top()>0 && i<0){
                int top=st.top();
                if(abs(top)==abs(i)){
                    d=true;
                    st.pop();
                    break;
                }else if((abs(st.top())>abs(i))) {
                    d=true;
                    break;
                }else{
                    st.pop();
                }
            }
            if(!d)st.push(i);
        }
        vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};