class Solution {
public:
    double getDouble(int pass, int total){
        return (double) (pass + 1)/ (total + 1) - (double)pass / total;
    }

    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double, pair<int,int>>> maxHeap;
        int size = classes.size();

        for(int i = 0; i < size; i++)
            maxHeap.push({getDouble(classes[i][0], classes[i][1]), {classes[i][0], classes[i][1]}});

        
        while(extraStudents--){
            auto top = maxHeap.top();
            maxHeap.pop();
            int newPass = top.second.first + 1;
            int newTotal = top.second.second + 1;
            maxHeap.push({getDouble(newPass, newTotal), {newPass, newTotal}});
        }

        double maxAverage = 0.0;
        while(!maxHeap.empty()){
            auto top = maxHeap.top();
            maxHeap.pop();
            maxAverage += (double)top.second.first/top.second.second;
        }

        return maxAverage/size;
    }
};