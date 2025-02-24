class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1;
        int maxArea=0;
        while(i<j){
            int area=(j-i)*min(h[i],h[j]);
            maxArea=max(maxArea,area);
            if(h[i]<h[j])i++;
            else j--;
        }
        return maxArea;
    }
};