#include<iostream>
using namespace std;
int main(){
int n = 1000;
int sum = 0;
for (int i = 0; i <=n; i++)
{

if(i == 5)
{
    break;
}
    sum += i;
}

cout << "sum = " << sum << endl;





    return 0;
}