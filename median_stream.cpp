#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class MedianFinder {
    priority_queue<int> maxHeap; // left half (max-heap)
    priority_queue<int, vector<int>, greater<int>> minHeap; // right half (min-heap)

public:
    void addNum(int num) {
        // Step 1: Insert into maxHeap first
        maxHeap.push(num);

        // Step 2: Balance by moving largest from maxHeap to minHeap
        minHeap.push(maxHeap.top());
        maxHeap.pop();

        // Step 3: Ensure maxHeap has equal or one more element than minHeap
        if (maxHeap.size() < minHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }

    double findMedian() {
        if (maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
        return maxHeap.top();
    }
};

int main() {
    MedianFinder mf;
    vector<int> stream = {5, 15, 1, 3};

    for (int num : stream) {
        mf.addNum(num);
        cout << mf.findMedian() << " ";
    }
    cout << endl;

    return 0;
}
