class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int, vector<bool>> m({
            {0, {false, false, false}},
            {1, {false, false, false}},
            {2, {false, false, false}},
            {3, {false, false, false}},
            {4, {false, false, false}},
            {5, {false, false, false}},
            {6, {false, false, false}},
            {7, {false, false, false}},
            {8, {false, false, false}},
            {9, {false, false, false}}
        });

        for(int i = 1; i < rings.length(); i += 2){
            char color = rings[i-1];
            int rod = rings[i] - '0';

            if (color == 'R') m[rod][0] = true;
            else if (color == 'G') m[rod][1] = true;
            else if (color == 'B') m[rod][2] = true;
        }

        int count = 0;
        for(auto &[first,second]: m)
            if(second[0] && second[1] && second[2])
                count++;

        return count;
    }
};