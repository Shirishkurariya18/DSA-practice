#include<iostream>
using namespace std;

// void printNumbers(int n){
//     if(n == 1){
//         cout << "1\n";
//         return;
//     }

//     cout << n << " ";
//     printNumbers(n-1);
// }


//  factorial

// int factorial(int n){
// if(n == 0){
//     return 1;
// }
// return n * factorial(n-1);
// }

// sum of N nums
int sum(int n){
    if(n == 1){
        return 1;
    }
    return n + sum(n-1);
}
int main(){
    // printNumbers(4);
//    cout <<  factorial(4) << endl;
cout << sum(4) << endl; // Output: 10
    return 0;
}