#include<iostream>
using namespace std;

int main(){

    int arr1[] = {1, 0, 7, 2, 5};  
    int arr2[] = {1, 9, 5, 3, -1};
    int arr3[] = {1, 5, 7, -1, 5};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int n3 = sizeof(arr3)/sizeof(arr3[0]);

    cout << "Common elements are: ";
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            for(int k = 0; k < n3; k++){
                if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
                    cout << arr1[i] << " ";
                    break;
                }
            }
        }
    }
    return 0;

}