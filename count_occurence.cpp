//  find occurence of each element 
#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,2,6,7,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        int count = 1;
        if(arr[i] != -1){
            for(int j = i + 1; j < n; j++){
                if(arr[i] == arr[j]){
                    count++;
                    arr[j] = -1;
                }
            }
            cout << "Element: " << arr[i] << " Count: " << count << endl;
        }
    }

     return 0;
}