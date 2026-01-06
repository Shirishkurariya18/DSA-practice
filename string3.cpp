// string compression

#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int i = 0, ansIndex = 0;
    while (i < n) {
        char current = chars[i];
        int count = 0;
        while (i < n && chars[i] == current) {
            i++;
            count++;
        }
        chars[ansIndex++] = current;
        if (count > 1) {
            string cnt = to_string(count);
            for (char c : cnt) {
                chars[ansIndex++] = c;
            }
        }
    }
    return ansIndex;
}

int main() {
    vector<char> chars = {'a', 'a', 'c', 'c', 'e', 'e', 'g', 'h', 'j', 'j'};
    int newLength = compress(chars);

    cout << "Compressed string: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i];
    }
    cout << endl;
    return 0;
}