#include<iostream>
using namespace std;

int main(){

/*int  array[] = {1,2,3,4};
cout<<sizeof(array)<<endl;
cout<<sizeof(array)/sizeof(array[0])<<endl;


int array2[4];
for (int  i = 0; i < 4; i++)
{
  cout << array2[i] << endl;
}
*/


// sum of array
/*
int array[4] = {3,4,10,11};

int sum = 0;
for (int  i = 0; i < 4; i++)
{
   sum += array[i];
}

cout << sum << endl;

*/

// maximum value out of all the elements in the array

int array[] = {1,2,3,4,45,6,7,8,9};

int max = array[1];
for (int i = 0; i < 9; i++)
{
    if (array[i]>max)
    {
       max = array[i];
    }
    
}

cout << max << endl;

















    return 0;
}