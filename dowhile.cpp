#include<iostream>
using namespace std;
int main(){
/*int n = 10;
int i = 1;
do
{
    cout << i << " ";
    i++;
} while (i <=n);

cout << endl;
*/
int n = 9;
bool isprime = true;
for (int i = 2; i*i <= n; i++)
{
    if(n % i == 0){ // non prime
        isprime = false;
        break;
    }
}
if(isprime == true){
    cout << "prime no\n";
}
else{
    cout << "non prime no\n";
}


    return 0;
}