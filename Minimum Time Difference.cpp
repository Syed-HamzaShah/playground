class Solution {
public:
    int convert(string temp) {
        int hours = (temp[0] - '0') * 10 + (temp[1] - '0');
        int minutes = (temp[3] - '0') * 10 + (temp[4] - '0');
        return hours * 60 + minutes;
    }

    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        for (const string& time : timePoints)
            minutes.push_back(convert(time));

        sort(minutes.begin(), minutes.end());

        int minDiff = 1440;
        int n = minutes.size();

        for (int i = 0; i < n - 1; ++i)
            minDiff = min(minDiff, minutes[i + 1] - minutes[i]);

        int circularDiff = 1440 - (minutes.back() - minutes.front());
        minDiff = min(minDiff, circularDiff);

        return minDiff;
    }
};