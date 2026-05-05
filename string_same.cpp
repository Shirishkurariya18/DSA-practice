#include<iostream>
#include<string>
using namespace std;

int main(){

    string str1, str2;
    cout<< "enter str1 " << endl;
    cin>>str1;
    cout<< "enter str2 " << endl;
    cin>>str2;

    if(str1 == str2){
        cout<<"equal" << endl;
    }
    else {
        cout << "not equal";
    }

    return 0;
}