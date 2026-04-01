class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int totalCell = n * n;
        int allowedContainers = maxWeight / w;
        return min(totalCell, allowedContainers);
    }
};