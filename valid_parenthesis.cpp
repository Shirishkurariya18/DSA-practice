#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    
    string s = "({[]})";
    stack<char> st;
    bool isValid = true;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) {
                isValid = false;
                break;
            }
            char top = st.top();
            st.pop();
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                isValid = false;
                break;
            }
        }
    }

    if (!st.empty()) {
        isValid = false;
    }

    cout << (isValid ? "Valid" : "Invalid") << endl;

    return 0;
}