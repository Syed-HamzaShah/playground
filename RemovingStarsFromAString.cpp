class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        stack<char> st;
        for(auto& c : s){
            if(c != '*')
                st.push(c);
            else
                st.pop();    
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};