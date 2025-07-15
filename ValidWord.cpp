#include <cctype>
using namespace std;

class Solution {
public:
    bool isValid(string word) {
        if (word.length() < 3) return false;

        bool vowel = false;
        bool consonant = false;

        for (auto& c : word) {
            if (isalpha(c)) {
                char lower = tolower(c);
                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u')
                    vowel = true;
                else
                    consonant = true;
            }        
            else if (isdigit(c))
                continue;
            else
                return false;
        }

        return vowel && consonant;
    }
};
