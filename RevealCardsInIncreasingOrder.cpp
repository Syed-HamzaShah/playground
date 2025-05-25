#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

vector<int> deckRevealedIncreasing(vector<int> &deck)
{
    sort(deck.begin(), deck.end()); // Step 1: sort the deck

    deque<int> dq;

    // Step 2: simulate reverse process
    for (int i = deck.size() - 1; i >= 0; --i)
    {
        if (!dq.empty())
        {
            dq.push_front(dq.back()); // move last to front
            dq.pop_back();
        }
        dq.push_front(deck[i]); // insert current card at front
    }

    return vector<int>(dq.begin(), dq.end());
}
