#include<iostream>
using namespace std;
int prime(int n){
    int prime = n;
    if ((n/2) != 0)
    {
        cout << prime << endl;
    }
    else
    {
        cout << not prime << endl;
    }
    



}




int main(){
    int n;
    cout << "enter a n : ";
cin >> n;
if (prime(n))
{
    cout << n << "prime" << endl;
}
else{
    cout << n << "not prime" << endl;
}

    
    return 0;
}