#include<iostream>
using namespace std;

int main(){

int n;
cout << "Enter the size of the array: ";
cin >> n;
int arr[n];
cout << "Enter the elements of the array: ";
for(int i = 0; i < n; i++){
    cin >> arr[i];
}
int sum = (n * (n + 1)) / 2;
int arr_sum = 0;
for(int i = 0; i < n; i++){
    arr_sum += arr[i];
}
int missing_number = sum - arr_sum;
cout << "The missing number is: " << missing_number << endl;


}