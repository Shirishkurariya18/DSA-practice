#include<iostream>
#include<cmath>
using namespace std;    

bool isArmstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = (int)(log10(n) + 1); // Number of digits in n

    while (n != 0) {
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }

    return 0;
}