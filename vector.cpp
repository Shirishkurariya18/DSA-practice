#include<iostream>
#include<vector>
using namespace std;
int main(){


vector<int> vec;

vec.push_back(0);
vec.push_back(1);
vec.push_back(2);

cout << vec.size() << endl; // 3
cout << vec.capacity() << endl; // 4



    return 0;
}