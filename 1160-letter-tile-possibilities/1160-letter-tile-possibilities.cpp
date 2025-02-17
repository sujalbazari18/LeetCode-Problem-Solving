class Solution {
public:
    int numTilePossibilities(string tiles) {
        int n=tiles.size();
        unordered_map<int,int> f;
        for(auto& tile:tiles)f[tile]++;
        return fun(f);
    }
    int fun(unordered_map<int,int>& freq){
        int count=0;
        for(auto& [a,b]:freq){
            if(b>0){
                b--;
                count+=fun(freq)+1;
                b++;
            }
        }
        return count;
    }
};