#include<iostream>
#include<string>
using namespace std;

int main(){

string str1, str2;
cout << "Enter first string: ";
cin>>str1;
cout << "Enter second string: ";
cin>>str2;
int count[256] = {0};
for(int i = 0; str1[i]; i++){
    count[str1[i]]++;
}
for(int i = 0; str2[i]; i++){
    count[str2[i]]--;
}
bool isAnagram = true;
for(int i = 0; i < 256; i++){
    if(count[i] != 0){
        isAnagram = false;
        break;
    }
}
if(isAnagram){
    cout << "The strings are anagrams." << endl;
}else{
    cout << "The strings are not anagrams." << endl;
}
}