#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    
//    pair<string,int>p = {"harsh",5};
   
//     cout << p.first << endl;
//     cout << p.second;




// pair<int,pair<char,int>>p = {1,{'a',3}};

// cout << p.first << endl;
// cout << p.second.first << endl;
// cout << p.second.second << endl;


// with vector
vector<pair<int,int>> vec = {{1,2},{3,4},{5,6}};

for (auto p : vec) {
    cout << p.first << " " << p.second << endl;
}


return 0;
}