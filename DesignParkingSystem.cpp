class ParkingSystem
{
    int Big;
    int Medium;
    int Small;

public:
    ParkingSystem(int big, int medium, int small)
    {
        Big = big;
        Medium = medium;
        Small = small;
    }

    bool addCar(int carType)
    {
        if (carType == 1 && Big != 0)
        {
            Big--;
            return true;
        }
        else if (carType == 2 && Medium != 0)
        {
            Medium--;
            return true;
        }
        else if (carType == 3 && Small != 0)
        {
            Small--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */