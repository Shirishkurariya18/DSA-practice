#include<iostream>
using namespace std;
int pow(int a, int b) {
    if (b == 0) return 1; // base case
    return a * pow(a, b - 1); // recursive case
}
int main() {
    int a, b;
    cout << "Enter base (a): ";
    cin >> a;
    cout << "Enter exponent (b): ";
    cin >> b;

    int result = pow(a, b);
    cout << a << " raised to the power of " << b << " is: " << result << endl;

    return 0;
}