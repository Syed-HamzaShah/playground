class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> heap(gifts.begin(), gifts.end());

        for(int i = 0; i < k; i++){
            int top = heap.top();
            heap.pop();
            heap.push(sqrt(top));
        }

        long long ans = 0;

        while(!heap.empty()){
            ans += heap.top();
            heap.pop();
        }
        return ans;
    }
};