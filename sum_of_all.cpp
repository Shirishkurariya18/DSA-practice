#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,8,3,6,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout<< sum << endl;

}
