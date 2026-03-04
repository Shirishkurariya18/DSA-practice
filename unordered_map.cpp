#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string, int> m;

    m["china"] = 150;
    m["india"] = 150;
    m["US"] = 50;
    m["Nepal"] = 15;

    for(pair<string, int> country : m){
        cout << country.first << " ," << country.second << endl;
    }

    if(m.count("Nepal" )){
        cout << "Nepal exists\n";
    } else {
        cout << "Nepal dosen't exist\n";
    }
}