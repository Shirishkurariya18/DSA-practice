#include<iostream>
using namespace std;

int main(){
int array[5] = {1,2,4,5,6};
int size = 5;
int smallestindex = -1;
int largestindex = -1;
int smallest = INT16_MAX;
int largest = INT16_MIN;
for (int i = 0; i < size; i++)
{
        // largest = max(largest, array[i]);
        // smallest = min(smallest, array[i]);

  if (array[i] < smallest)
  {
    smallest = array[i];
    smallestindex = i;
  }
  if (array[i] > largest)
  {
    largest = array[i];
    largestindex = i;
  }
  
  
    
  
}
cout << "Smallest: " << smallest << ", Index: " << smallestindex << endl;
cout << "Largest: " << largest << ", Index: " << largestindex << endl;
    return 0;
}