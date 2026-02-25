#include<iostream>
#include<queue>
using namespace std;


int main(){

    priority_queue<int> pq; // max heap by default

    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(1);

    while(!pq.empty()){
        cout << pq.top() << " "; // prints the maximum element
        pq.pop(); // removes the maximum element
    }
    return 0;
}