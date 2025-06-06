#include<iostream>
#include<vector>
using namespace std;
int main(){


int a = 10;
int* ptr = &a;
cout << *(&a) << endl;
/*int** parPtr = &ptr;
cout <<  &ptr << endl;
cout << parPtr << endl;
*/
    return 0;
}