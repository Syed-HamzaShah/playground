class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        int past = 0;
        unordered_set<int> s;

        for(int i = 0; i < A.size(); i++){
            if(s.find(A[i]) != s.end()) past++;
            if(s.find(B[i]) != s.end()) past++;
            if(A[i] == B[i]) past++;
            s.insert(A[i]);
            s.insert(B[i]);
            ans.push_back(past);
        }

        return ans;
    }
};