#include<iostream>
using namespace std;


int main(){
    int n , k;
    cin>>n>>k;
    int arr[50];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

   int kscore = arr[k-1];
    int count = 0;
    for(int i = 0; i < n-1; i++){
        if(arr[i] >= kscore && arr[i] > 0){
            count++;
        }
    }
    cout<<count<<endl;
}