class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int removeNumber = n * 0.05;

        double sum = 0.0;

        for(int i = removeNumber; i < n - removeNumber; i++)
            sum += arr[i];

        return sum / (n - 2 * removeNumber);
    }
};