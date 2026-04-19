class Solution {
public:
    int maxDistance(vector<int>& A, vector<int>& B) {
        int i = 0; 
        int j = 1;

        for (i; i < A.size() && j < B.size(); j++)
            if (A[i] > B[j])
                i++;

        return j - i - 1;
    }
};