#include<iostream>
using namespace std;
void arrayUnion(int arr1[], int n1, int arr2[], int n2){
//  union of  two arrays 
for(int i = 0; i < n1; i++){
    cout << arr1[i] << " ";
}
for(int i = 0; i < n2; i++){
    bool found = false;
    for(int j = 0; j < n1; j++){
        if(arr2[i] == arr1[j]){
            found = true;
            break;
        }
    }
    if(!found){
        cout << arr2[i] << " ";
    }
}
}

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {4,5,6,7,8};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    arrayUnion(arr1,n1,arr2,n2);

     return 0;
}