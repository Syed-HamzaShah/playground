class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i <= high; i++){
            string s = to_string(i);
            int size = s.length();
            if(size % 2 != 0) continue;

            int half = size / 2;
            int first = 0, second = 0;

            for(int i = 0; i < half; i++) first += s[i] - '0';
            for(int i = half; i < size; i++) second += s[i] - '0';

            if(first == second) count++;
        }
        
        return count;
    }
};