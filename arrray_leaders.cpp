// pair_sum


#include<iostream>
using namespace std;


int main(){

    int arr[] = {1,3,5,7,10,12};
    int target = 13;
    int l = 0;
    int r = 5;
    while (l < r){
        int x = arr[l] + arr[r];
        if(x == target){
            cout << "present : " << arr[l] << " + " << arr[r]  << " = " << target << endl;
            return 1;
        } 
        else if( x > target){
            r--;
        }
        else {
            l++;
        }
    }
    
    cout << "not present" << endl;
    return 0;
}