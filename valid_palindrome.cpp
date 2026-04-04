#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "A man, a plan, a canal: Panama";
    string str = "";
    for(int i=0; i<s.length(); i++){
        if(isalnum(s[i])){
            str += tolower(s[i]);
        }
    }
    int left = 0, right = str.length()-1;
    while(left < right){
        if(str[left] != str[right]){
            cout << "Not a palindrome" << endl;
            return 0;
        }
        left++;
        right--;
    }
    cout << "Palindrome" << endl;


    return 0;
}