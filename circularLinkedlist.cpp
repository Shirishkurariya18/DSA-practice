#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class circularList {
    Node* head;
     Node* tail;

     public:
     circularList(){
        head = tail = NULL;
     }

     void insertAthead(int val){
        Node* newNode = new Node(val);

        if(tail == NULL){
            head = tail = newNode;
            tail-> next = head;
        }else {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
     }

     void print(){
        if(head == NULL) return;

        cout<< head->data << "->";
        Node* temp = head->next;

        while(temp != head){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << temp->data << endl;
     }

     void insertAttail(int val) {
         Node* newNode = new Node(val);

        if(tail == NULL){
            head = tail = newNode;
            tail-> next = head;
        }else {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
     }
     
     void deleteAthead(){
        if(head == NULL) return;
        else if(head == tail){
            delete head;
            head = tail = NULL;
        }else {
            Node* temp = head;
            head = head-> next;
            tail->next = head;

            temp->next = NULL;
        }
     }

     void deleteAttail(){
        if(head == NULL) return;
        else if (head == tail){
            delete head;
            head = tail = NULL;
        }else {
            Node* temp = tail;
            Node* prev = head;
            while(prev->next != tail){
                prev = prev->next;
            }
            tail = prev;
            tail -> next = NULL;
            temp -> next = NULL;
            delete temp;
        }
     }
};

int main(){

    circularList cll;
    // cll.insertAthead(1);
    // cll.insertAthead(2);
    // cll.insertAthead(3);

    cll.insertAttail(1);
    cll.insertAttail(2);
    cll.insertAttail(3);
    // cll.deleteAthead();
    cll.deleteAttail();
    cll.print();
    return 0;
}