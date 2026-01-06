// Queue using 2 Stacks

// #include<iostream>
// #include<stack>
// using namespace std;

// class Queue {
//     stack<int> s1;
//     stack<int> s2;
//     public:

//     void push(int data){
//         // s1 -> s2
//         while(!s1.empty()){
//             s2.push(s1.top());
//             s1.pop();
//         }
//         s1.push(data);

//         // s2 -> s1
//         while(!s2.empty()){
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }
//     void pop(){
//         s1.pop();
//     }
//     int front(){
//         return s1.top();
//     }

//     bool empty(){
//         return s1.empty();
//     }

// };

// int main(){
//     Queue q;
//     q.push(10); 
//     q.push(20);
//     q.push(30);
//     while(!q.empty()){
//         cout<<q.front()<<endl;  
//         q.pop();
//     }
//     return 0;
// }



// Stack using 2 Queues

#include<iostream>
#include<queue>
using namespace std;

class Stack {
    queue<int> q1;
    queue<int> q2;
    public:
  void push(int data){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop(){
        q1.pop();
    }
    int top(){
        return q1.front();
    }
    bool isempty(){
        return q1.empty();
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
   while (!s.isempty())
    {
     cout<<s.top()<<endl;
     s.pop();
    }
    
     
    
     return 0;

}
