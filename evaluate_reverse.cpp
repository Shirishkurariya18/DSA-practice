#include<iostream>
#include<vector>
using namespace std;

int evaluateReversePolishNotation(vector<string>& tokens) {
    vector<int> stack; // Stack to hold operands
    
    for (const string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            // Pop the top two operands from the stack
            int b = stack.back(); stack.pop_back();
            int a = stack.back(); stack.pop_back();
            
            // Perform the operation and push the result back onto the stack
            if (token == "+") {
                stack.push_back(a + b);
            } else if (token == "-") {
                stack.push_back(a - b);
            } else if (token == "*") {
                stack.push_back(a * b);
            } else if (token == "/") {
                // Handle division, ensuring truncation towards zero
                stack.push_back(a / b);
            }
        } else {
            // Token is an operand, convert it to an integer and push onto the stack
            stack.push_back(stoi(token));
        }
    }
    
    // The final result will be the only element left in the stack
    return stack.back();
}

int main() {
    vector<string> tokens = {"2","1","+","3","*"};
    int result = evaluateReversePolishNotation(tokens);
    cout << result << endl;
    return 0;
}