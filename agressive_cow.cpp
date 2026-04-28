#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> cows(n);
    for(int i = 0; i < n; i++) cin>>cows[i];
    
    int max_cow = cows[0];
    int count = 1; // Count the first cow
    for(int i = 1; i < n; i++){
        if(cows[i] > max_cow){
            count++;
            max_cow = cows[i]; // Update the maximum cow seen so far
        }
    }
    
    cout<<count<<endl; // Output the number of aggressive cows
}

int main(){

    int t;
    cin>>t; // Number of test cases
    while(t--){
        solve();
    }
    return 0;
}