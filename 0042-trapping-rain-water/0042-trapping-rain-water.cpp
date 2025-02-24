class Solution {
public:
    int trap(vector<int>& h) {
        int i=0,j=h.size()-1;
        int ans=0,left=h[i],right=h[j];  
        while(i<j){
            if(left<right){
                i++;
                left=max(left,h[i]);
                ans+=left-h[i];
            }else{
                j--;
                right=max(right,h[j]);
                ans+=right-h[j];
            }
        }
        return ans;
        
    }
};