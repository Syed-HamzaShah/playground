class Solution {
public:
    int minMoves(vector<int>& nums) {
        int lo = INT_MAX;
        int moves = 0;

        for(int x : nums)
            lo = min(lo, x);

        for(int x : nums) 
            moves += x - lo;

        return moves;
    }
};