#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main(){
    deque<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);

    l.pop_back();
    l.pop_front();

    for (int val : l)
    {
       cout << val << " ";
    }
    cout << endl;

return 0;
}