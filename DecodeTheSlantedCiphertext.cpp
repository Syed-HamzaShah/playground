class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if (rows == 1) return encodedText;

        int n = encodedText.size();
        int cols = n / rows;

        vector<vector<char>> grid(rows, vector<char>(cols));

        int index = 0;

        for (int i = 0; i < rows; i++) 
            for (int j = 0; j < cols; j++) 
                grid[i][j] = encodedText[index++];

        string decodedText = "";

        for (int startCol = 0; startCol < cols; startCol++) {
            int i = 0, j = startCol;
            while (i < rows && j < cols) {
                decodedText += grid[i][j];
                i++;
                j++;
            }
        }

        while (!decodedText.empty() && decodedText.back() == ' ')
            decodedText.pop_back();

        return decodedText;
    }
};