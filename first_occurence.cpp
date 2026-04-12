#include<iostream>
using namespace std;

int main(){

int arr[] = {1,3,3,4,2,6,7,2,9};
int n = sizeof(arr)/sizeof(arr[0]);
int x = 2;
for(int i = 0; i < n; i++){
    if(arr[i] == x){
        cout << "First Occurrence of " << x << " is at index: " << i << endl;
        break;
    }
}

    return 0;
}