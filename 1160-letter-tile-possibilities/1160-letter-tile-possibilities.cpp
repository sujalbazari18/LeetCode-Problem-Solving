class Solution {
public:
    int numTilePossibilities(string tiles) {
        int n=tiles.size();
        // map<char,int> f;
        vector<int> arr(26,0);
        for(auto& a: tiles)arr[a-'A']++;
        // for(auto& tile:tiles)f[tile]++;
        return fun(arr);
    }
    int fun(vector<int>& arr){
        int count=0;
        for(int i=0;i<26;i++){
            if(arr[i]>0){
                arr[i]--;
                count+=1+fun(arr);
                arr[i]++;
            }
        }
        return count;
    }
    int fun(map<char,int>& freq){
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


