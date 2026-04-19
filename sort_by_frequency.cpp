#include<iostream>
#include<string>
using namespace std;

void sort_by_Frequency(string str) {
    int freq[256] = {0};

    for (char ch : str) {
        freq[ch]++;
    }

    string result;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            result += string(freq[i], (char)i);
        }
    }

    cout << "Sorted by Frequency: " << result << endl;
}

int main(){
    string str = "tree";
    sort_by_Frequency(str);
    return 0;
}