class Solution {
    vector<vector<int>> ans;
public:
    void leapOfFaith(vector<vector<int>>& graph, vector<int> temp, int size,int i){
        if(i == size - 1) {
            ans.push_back(temp);
            return;
        }

        for(int j = 0; j < graph[i].size(); j++){
            temp.push_back(graph[i][j]);
            leapOfFaith(graph,temp,size,graph[i][j]);
            temp.pop_back();
        }
        return;
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> temp = {0};
        int size = graph.size();

        leapOfFaith(graph,temp,size,0);

        return ans;
    }
};