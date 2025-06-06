#include<iostream>
#include<vector>
using namespace std;

void sumAndproduct(int arr[], int n, int &sum, int &product){
    sum = 0;
    product = 1;
for (int  i = 0; i < n; i++)
{
    sum += arr[i];
    product *= arr[i];
}
}

    


int main(){
    
int n = 5;
int arr[] = {1, 2, 3, 4, 5};
int sum, product;
sumAndproduct(arr, n, sum, product);

cout << "sum : " << sum << endl;
cout << "product : " << product << endl;








    return 0;
}