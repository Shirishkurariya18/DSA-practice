#include<iostream>
using namespace std;


int main(){

    int arr[] = {2, 8 , 2, 2, 0, 2};
    int x = 2;

    int count = 0;
    int n = sizeof(arr)/ sizeof(arr[0]);
    
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            count++;
        }
    }
    cout << count << endl;
}