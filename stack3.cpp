#include <iostream>
#include <stack>
using namespace std;

// Function to sort stack using another stack (stack sort)
void sortStack(stack<int>& s) {
    stack<int> tempStack;
    
    while (!s.empty()) {
        int temp = s.top();
        s.pop();
        
        while (!tempStack.empty() && tempStack.top() > temp) {
            s.push(tempStack.top());
            tempStack.pop();
        }
        
        tempStack.push(temp);
    }
    
    // Transfer back to original stack
    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

int main() {
    stack<int> s;
    
    // Push five numbers onto the stack
    s.push(34);
    s.push(3);
    s.push(31);
    s.push(98);
    s.push(92);
    
    cout << "Stack before sorting: ";
    stack<int> temp = s; // Copy for printing
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
    
    // Sort the stack
    sortStack(s);
    
    cout << "Stack after sorting: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    
    return 0;
}