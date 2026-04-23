#include<iostream>
#include<string>
using namespace std;
// Decode String
string decodeString(const string& s) {
    string result;
    int i = 0;

    while (i < s.length()) {
        if (isdigit(s[i])) {
            int num = 0;
            while (i < s.length() && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i++; // Skip the opening bracket '['
            string decodedString;
            int bracketCount = 1; // To handle nested brackets

            while (i < s.length() && bracketCount > 0) {
                if (s[i] == '[') {
                    bracketCount++;
                } else if (s[i] == ']') {
                    bracketCount--;
                }
                if (bracketCount > 0) {
                    decodedString += s[i];
                }
                i++;
            }

            // Recursively decode the string inside the brackets
            string innerDecoded = decodeString(decodedString);
            for (int j = 0; j < num; j++) {
                result += innerDecoded;
            }
        } else {
            result += s[i];
            i++;
        }
    }

    return result;
}

int main() {
    string s = "3[a]2[bc]";
    cout << decodeString(s) << endl; // Output: "aaabcbc"

    s = "3[a2[c]]";
    cout << decodeString(s) << endl; // Output: "accaccacc"

    s = "2[abc]3[cd]ef";
    cout << decodeString(s) << endl; // Output: "abcabccdcdcdef"

    return 0;
}