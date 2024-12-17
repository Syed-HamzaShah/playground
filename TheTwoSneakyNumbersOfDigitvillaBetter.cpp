#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_set<int> seen;  // To track numbers we've encountered
        unordered_set<int> duplicates; // To track duplicates

        for (int num : nums) {
            if (seen.count(num)) {
                if (duplicates.count(num) == 0) {
                    ans.push_back(num);
                    duplicates.insert(num); // Ensure we only add each duplicate once
                }
            } else {
                seen.insert(num);
            }
        }

        return ans;
    }
};
