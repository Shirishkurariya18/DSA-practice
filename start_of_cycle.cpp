#include<iostream>
#include<unordered_set>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    Node* findFirstNode(Node* head){
        unordered_set<Node*> s;
        while(head!=NULL){
            if(s.find(head)!=s.end()){
                return head;
            }
            s.insert(head);
            head = head->next;
        }
        return NULL;
    }
};

int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next;

    Solution ob;
    Node* ans = ob.findFirstNode(head);
    if(ans!=NULL){
        cout<<"The starting node of the cycle is: "<<ans->data<<endl;
    }
    else{
        cout<<"No cycle detected."<<endl;
    }

    return 0;
}