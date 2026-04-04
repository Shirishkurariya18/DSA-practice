#include<iostream>
#include<string>
using namespace std;
int main(){

    string s = "hello world";
    char c = 'o';
    string result = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] != c){
            result += s[i];
        }
    }
    cout << result << endl;

    return 0;
}