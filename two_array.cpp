#include<iostream>
using namespace std;
// check if two arrays are equal or not in values and size 
int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,8,3,4,5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    if(n1 != n2){
        cout << "Arrays are not equal in size" << endl;
        return 0;
    }
    for(int i=0; i<n1; i++){
        if(arr1[i] != arr2[i]){
            cout << "Arrays are not equal in values" << endl;
            return 0;
        }
    }

    cout << "Arrays are equal in size and values" << endl;  

    return 0;
}