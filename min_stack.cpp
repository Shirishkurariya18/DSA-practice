#include<iostream>
#include<stack>
using namespace std;
class MinStack {
    stack<int> s;
    stack<int> minStack;
public:
    void push(int x) {
        s.push(x);
        if (minStack.empty() || x <= minStack.top()) {
            minStack.push(x);
        }
    }
    void pop() {
        if (s.empty()) return;
        if (s.top() == minStack.top()) {
            minStack.pop();
        }
        s.pop();
    }
    int top() {
        if (s.empty()) return -1; // Return -1 to indicate stack is empty
        return s.top();
    }
    int getMin() {
        if (minStack.empty()) return -1; // Return -1 to indicate stack is empty
        return minStack.top();
    }
};
int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << "Minimum element: " << minStack.getMin() << endl; // Output: -3
    minStack.pop();
    cout << "Top element: " << minStack.top() << endl; // Output: 0
    cout << "Minimum element after pop: " << minStack.getMin() << endl; // Output: -2
    return 0;
}