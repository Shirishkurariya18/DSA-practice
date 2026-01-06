#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
     Node* prev;

     Node(int val){
        data = val;
        next = prev = NULL;
     }
};

class DoublyList{
    Node* head;
    Node* tail;

    public:
    DoublyList(){
        head = tail = NULL;
    }

    // push_front

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " <=>";
            temp = temp->next;
        }
        cout <<"NULL" << endl;
    }

    // push_back

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // pop_front

    void pop_frront(){
        if(head == NULL){
            cout << "List is empty, nothing to pop." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head != NULL) {
            head->prev = NULL; // Update the new head's prev pointer
        } 
        temp ->next = NULL; // Clear the next pointer of the popped node
        delete temp;
    }

    // pop_back

    void pop_back(){
        if(tail == NULL){
            cout << "List is empty, nothing to pop." << endl;
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if(tail != NULL) {
            tail->next = NULL; // Update the new tail's next pointer
        } else {
            head = NULL; // If the list becomes empty
        }
        delete temp; // Free the memory of the popped node
    }
};
int main(){
    DoublyList Dll;

    // Dll.push_front(10);
    // Dll.push_front(20);
    // Dll.push_front(30);

    Dll.push_back(10);
    Dll.push_back(20);
    Dll.push_back(30);

    Dll.pop_frront(); // Removes 10
    Dll.pop_back(); // Removes 30
    Dll.print(); // Output: 30 <=> 20 <=> 10 <=> NULL
    return 0;
}