#include<iostream>
using namespace std;

 bool isSortedOrnot(int arr[], int n){
 

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
           return false;
        } 
    }
    return true;

}
int main(){

    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
  if (isSortedOrnot(arr, n))
    cout << "Sorted" << endl; 
    else
        cout << "Not Sorted" << endl;


    return 0;
}