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

class list {
    Node* head;
    Node* tail;

    public:
    list(){
        head = tail = NULL;
    }
    void push_front(int val){
      Node* newNode = new Node(val);  
    //   Node newNode(int val); // static
    if(head == NULL){
        head = tail = newNode;
        return;
    } else {
        newNode->next = head;
        head = newNode;
    }
    }
// for push back
void push_back(int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

// for pop front
// Removes the first element from the list
void pop_front(){
    if(head == NULL){  // List is empty
        cout << "List is empty, nothing to pop." << endl;
        return;
    } 
    Node* temp = head;
    head = head->next;
    temp->next = NULL; // Clear the next pointer of the popped node
    delete temp;

}

// for pop back
// Removes the last element from the list
void pop_back(){
    if(head == NULL){  // List is empty
        cout << "List is empty, nothing to pop." << endl;
        return;
    }
    Node* temp = head;
    while(temp->next != tail){
        temp = temp->next;
    }
    temp->next = NULL; // Remove the last node
    delete tail; // Free the memory of the last node
    tail = temp; // Update tail to the new last node
}

// for inserting in middle of the linked list

void insert(int val, int pos){
if(pos < 0){
    cout << " invalid pos\n";
    return;
}
if(pos == 0){
    push_front(val);
    return;
}
Node* temp = head;
for(int i=0; i<pos-1; i++){
    if(temp == NULL){
        cout << " invalid pos\n";
        return;
    }
    temp = temp->next;
}
Node* newNode = new Node(val);
newNode->next = temp->next;
temp->next = newNode;
}

    void printll(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    
// for search in linkedlist 

    int search(int key){
        Node* temp = head;
        int idx = 0;
        
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main(){

list ll;
ll.push_front(10);
ll.push_front(20);
ll.push_front(30);
// ll.push_back(40);
// ll.pop_front(); // Removes 30
// ll.printll(); // Output: 20 10 40
 //ll.printll(); // Output: 30 20 10 
// ll.pop_back(); // Removes 40
// ll.printll(); // Output: 20 10
ll.insert(4,0);
ll.printll();
cout << ll.search(20);
    return 0;
}