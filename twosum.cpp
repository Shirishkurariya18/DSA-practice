#include<iostream>
#include<vector>
using namespace std;

int main(){

int arr[] = {4,5,3,7,5,6};
int target = 10;


for (int i = 0; i <= arr[5]; i++)
{
  for (int j = i+1; j <= arr[5]; j++)
  {
    if(arr[i] + arr[j] == target)
    {
      cout << i << " " << j << endl;
    }
  }
  
}

    return 0;
}