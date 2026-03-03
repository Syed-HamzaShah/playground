class Solution {
public:
    int minTimeToType(string word) {
        int ans = word.length();
        char current = 'a';

        for(int i = 0; i < word.size(); i++){
            char target = word[i];

            int diff = abs(target - current);
            int move = min(diff, 26 - diff);

            ans += move;
            current = target;
        }

        return ans;
    }
};