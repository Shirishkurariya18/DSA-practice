// #include<iostream>
// #include<vector>
// using namespace std;

// class stack {
//     vector<int>vec;
//     public:
//    int push(int val){
//        vec.push_back(val); 
//     }
//     void pop(){
//         if(isempty()){
//             cout<<"Stack is empty"<<endl;
//             return;
//         };
//         vec.pop_back();
//     }
//     int top(){
//         int Lastidx = vec.size()-1;
//         return vec[Lastidx];
//     }
//     bool isempty(){
//         return vec.size() == 0;
//     }
// };

// int main(){
//    stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//    while (!s.isempty())
//    {
//     cout<<s.top() << " " <<endl;
//     s.pop();
//    }
   
    

//     return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
template<class T>
class stack {
    vector<T>vec;
    public:
   int push(T val){
       vec.push_back(val); 
    }
    void pop(){
        if(isempty()){
            cout<<"Stack is empty"<<endl;
            return;
        };
        vec.pop_back();
    }
    T top(){
        int Lastidx = vec.size()-1;
        return vec[Lastidx];
    }
    bool isempty(){
        return vec.size() == 0;
    }
};

int main(){
   stack<string> s;
    s.push("shirish");
    s.push("loves");
    s.push("coding");
   while (!s.isempty())
   {
    cout<<s.top() << " " <<endl;
    s.pop();
   }
   
    

    return 0;
}