// #include<iostream>
// using namespace std;

// int main(){
// int n;

// cout<<"enter your size of array" << endl;
// cin>>n;
// int arr[n];
// cout<<"enter array elements" << endl;
// for(int i =0; i<n; i++){
//   cin>>arr[i];
// }
// int max1,max2;
//   if(arr[0]>arr[1]){
//     max1 = arr[0];
//     max2 = arr[1];
//   }
//   else{
//     max1=arr[1];
//     max2=arr[0];
//   }

//   for (int i = 2; i < n; i++)
//   {
//     if(arr[i]>max1){
//       max2=max1;
//       max1=arr[i];
//     }
//     else if (arr[i]>max2)
//     {
//      max2=arr[i];
//     }
//   }
//   cout<<(max1+max2) << endl;
//     return 0;
// }

// // for minimum sum

// #include<iostream>
// using namespace std;

// int main(){
// int n;

// cout<<"enter your size of array" << endl;
// cin>>n;
// int arr[n];
// cout<<"enter array elements" << endl;
// for(int i =0; i<n; i++){
//   cin>>arr[i];
// }
// int min1, min2;
// if(arr[0]<arr[1]){
//   min1=arr[1];
//   min2=arr[0];
// }
// else{
//    min1=arr[0];
//   min2=arr[1];
// }
// for (int i = 2; i < n; i++)
// {
//  if (arr[i]<min1)
//  {
//   min2=min1;
//   min1=arr[i];
//  }
//  else if(arr[i]<min2){
//   min2=arr[i];
//  }
// }
//  cout<<(min1+min2) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class student{
//   public:

//   double rollno;
//   string name;
//   int age ;
  
// };

// int main(){

// student s1;
// s1.rollno = 114621;
// s1.age = 20;
// s1.name = "shirish";
// cout << s1.rollno<<endl;
// cout<< s1.name<<endl;
// cout << s1.age <<endl;
// }


#include<iostream>
#include<stack>
#include<list>
#include<math.h>
#include<vector>
using namespace std;

class Stack {
vector<int>v;
// list<int>ll;
public:
void push(int val){
  v.push_back(val);
}
void pop(){
  v.pop_back();
}
int top(){
    if (!v.empty())
            return v[v.size()-1];
        else {
            cout << "Stack is empty!" << endl;
            return -1; // or throw exception
        }
}
bool empty(){
    return v.empty();
}
};
int main(){

  // stack<int>s;
  // s.push(25);
  // s.push(10);

  Stack s;
  s.push(12);
  s.push(5);
  cout<<s.top()<<endl;
  s.pop();
  cout<<s.top()<<endl;
  // s.top();
}