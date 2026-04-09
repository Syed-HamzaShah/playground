class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long time = 0;
        long long totalWait = 0;

        for (int i = 0; i < customers.size(); i++) {
            int arrival = customers[i][0];
            int cook = customers[i][1];

            time = max(time, (long long)arrival);
            time += cook;
            totalWait += (time - arrival);
        }

        return (double)totalWait / customers.size();
    }
};