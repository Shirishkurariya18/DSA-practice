#include<iostream>
using namespace std;


int main(){

    int n = 1234;
    int sum = 0;
    for(int i = n; i > 0; i /= 10){
        sum += i % 10;
    }
    cout<< "sum of digits in a number is : " << sum << endl;
    return 0;
}