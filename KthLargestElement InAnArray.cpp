class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;

        for(auto &num: nums)
            maxHeap.push(num);

        int index = 1;
        while(!maxHeap.empty()){
            if(index == k) return maxHeap.top();
            index++;
            maxHeap.pop();
        }    
        return -1;
    }
};