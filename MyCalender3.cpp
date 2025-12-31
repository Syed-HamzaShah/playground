class MyCalendarThree {
    map<int, int> timeline;
public:
    MyCalendarThree() {}
    
    int book(int startTime, int endTime) {
        timeline[startTime]++;
        timeline[endTime]--;

        int current = 0;
        int maxActive = current;

        for(auto &[first, second]: timeline){
            current += second;
            maxActive = max(maxActive, current);
        }

        return maxActive;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */