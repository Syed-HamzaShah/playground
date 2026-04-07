class Robot {
    int width, height;
    int x = 0, y = 0;
    string direction = "East";

public:
    Robot(int width, int height) {
        this->width = width;
        this->height = height;
    }
    
    void step(int num) {
        int perimeter = 2 * (width + height) - 4;
        num %= perimeter;

        if (num % perimeter == 0) {
            if (x == 0 && y == 0) direction = "South";
            else if (x == width - 1 && y == 0) direction = "East";
            else if (x == width - 1 && y == height - 1) direction = "North";
            else if (x == 0 && y == height - 1) direction = "West";
        }

        while (num--) {
            if (direction == "East") {
                if (x + 1 < width) x++;
                else {
                    direction = "North";
                    y++;
                }
            }
            else if (direction == "North") {
                if (y + 1 < height) y++;
                else {
                    direction = "West";
                    x--;
                }
            }
            else if (direction == "West") {
                if (x - 1 >= 0) x--;
                else {
                    direction = "South";
                    y--;
                }
            }
            else { // South
                if (y - 1 >= 0) y--;
                else {
                    direction = "East";
                    x++;
                }
            }
        }

        
    }
    
    vector<int> getPos() {
        return {x, y};
    }
    
    string getDir() {
        return direction;
    }
};