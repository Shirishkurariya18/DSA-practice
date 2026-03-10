#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1,1,2,2,2,3,4,4};
    int n = sizeof(arr)/sizeof(arr[0]);
for(int i = 0; i < n-1; i++){
    if(arr[i] == arr[i+1]){
        for(int j = i; j < n-1; j++){
            arr[j] = arr[j+1];
        }
        n--;
        i--;
    }    
}
for(int i = 0; i < n; i++){
    cout<< arr[i] << endl;
}       
return 0;
}