class Solution {
    vector<int> ans;

    void dfs(int i, int n){
        if(i > n) return;
        ans.push_back(i);
        for(int j = 0; j <= 9; j++){
            if(i * 10 + j > n) return;
            dfs(i*10+j,n);
        }
    }
public:
    vector<int> lexicalOrder(int n) {
        for(int j = 1; j <= 9; j++){
            if(j > n) break;
            dfs(j , n);
        }
        return ans;
    }
};