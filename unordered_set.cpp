#include<iostream>
#include<unordered_set>
#include<map>
using namespace std;

int main(){

    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(7);

    cout << s.size() << endl;
     s.erase(3);
    if(s.find(3) != s.end()){
        cout << "3 exists\n";
    } else {
        cout << " 3 doesn't exists\n";
    }
    return 0;
}