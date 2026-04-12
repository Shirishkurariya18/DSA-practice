#include<iostream>
#include<string>
using namespace std;


int main(){

    string str = "madam";
    int st = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;
    while(st < end){
        if(str[st] != str[end]){
            isPalindrome = false;
            break;
        }
        st++;
        end--;
    }
    if(isPalindrome){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }

    return 0;
}