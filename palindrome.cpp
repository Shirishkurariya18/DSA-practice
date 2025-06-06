#include<iostream>
using namespace std;

int main(){
    int num;
  cout << " enter a number: ";
        cin >> num;
        int n = num;
        int rev = 0;
        while (n > 0)
        {
            int lastDigit = n % 10;
            rev = rev * 10 + lastDigit;
            n /= 10;
        }
        if (num == rev)
        {
            cout << "Palindrome" << endl;
        }
        else
        {
            cout << "Not Palindrome" << endl;
        }
    }
    
