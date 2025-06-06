#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main(){

    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;


    m.insert({"phone", 25});
    for(auto p : m) {
        cout << p.first << " " << p.second << endl;
    }

    cout << " count = " << m["laptop"] << endl;
    return 0;
}