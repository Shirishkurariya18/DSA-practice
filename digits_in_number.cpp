#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void printDigits(int n){
   int sum = 0;
    while(n != 0){
        
        int digit = n % 10;
        // cout << digit << endl;
       sum += digit;
        n /= 10;
       
    }
     cout << sum << endl;
}

int main(){

    int n = 3568;
    printDigits(n);

    cout << (int)(log10(n) + 1) << endl; // Number of digits in n
    return 0;
}