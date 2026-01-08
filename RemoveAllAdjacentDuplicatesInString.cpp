class Solution {
public:
    string removeDuplicates(string s) {
        if(s.length() == 1) return s;
        stack<int> st;

        for(int i = 0; i < s.length(); i++){
            if(st.empty()) 
                st.push(s[i]);
            else if(st.top() == s[i])
                st.pop();
            else
                st.push(s[i]);    
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};