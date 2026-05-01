#include<iostream>
#include<stack>
using namespace std;

class Queue {
    stack<int> s1, s2;
public:
    void enqueue(int x) {
        s1.push(x);
    }

    void dequeue() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty()) {
            s2.pop();
        } else {
            cout << "Queue is empty" << endl;
        }
    }

    int front() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty()) {
            return s2.top();
        } else {
            cout << "Queue is empty" << endl;
            return -1; // Return -1 to indicate the queue is empty
        }
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Front element: " << q.front() << endl; // Output: 1
    q.dequeue();
    cout << "Front element after dequeue: " << q.front() << endl; // Output: 2
    q.dequeue();
    cout << "Front element after another dequeue: " << q.front() << endl; // Output: 3
    q.dequeue();
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Output: Yes

    return 0;
}