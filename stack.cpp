#include<iostream>
#include<vector>
#include<list>
#include<stack>
using namespace std;

// class stack{

//     vector<int>v;
//     list<int>ll;

//     public:

//     void push(int val){
//         // v.push_back(val);
//         ll.push_front(val);
//     }
// void pop(){
//     // v.pop_back();
//     ll.pop_front();
// }

// int top(){
// //    return  v[v.size()-1];
//     return ll.front();
// }
// bool empty(){
//     // return v.size() == 0;
//     return ll.size() ==0;
// }

// };
int main(){
stack<int>s;
// stack s;
s.push(1);
s.push(2);
s.push(3);
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;

    return 0;
}