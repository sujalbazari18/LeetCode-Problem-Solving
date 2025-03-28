class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char a:s){
            if(a=='*'){
                if(!st.empty())
                st.pop();
            }else st.push(a);
        }
        string result;
        while(!st.empty()){
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};