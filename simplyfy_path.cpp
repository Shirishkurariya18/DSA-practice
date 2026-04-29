#include<iostream>
#include<vector>
using namespace std;

// Given a file path, simplify it to shortest valid form

string simplifyPath(string path) {
    vector<string> stack; // Stack to hold valid directory names
    string result; // String to build the simplified path
    int i = 0;
    
    while (i < path.size()) {
        // Skip consecutive slashes
        while (i < path.size() && path[i] == '/') {
            i++;
        }
        
        // Extract the next directory name
        string dir;
        while (i < path.size() && path[i] != '/') {
            dir += path[i];
            i++;
        }
        
        if (dir == "." || dir.empty()) {
            // Current directory, do nothing
            continue;
        } else if (dir == "..") {
            // Parent directory, pop from stack if not empty
            if (!stack.empty()) {
                stack.pop_back();
            }
        } else {
            // Valid directory name, push onto stack
            stack.push_back(dir);
        }
    }
    
    // Build the simplified path from the stack
    for (const string& d : stack) {
        result += "/" + d;
    }
    
    return result.empty() ? "/" : result; // Return "/" if result is empty
}

int main() {
    string path = "/a/./b/../../c/";
    string simplifiedPath = simplifyPath(path);
    cout << simplifiedPath << endl; // Output: "/c"
    return 0;
}