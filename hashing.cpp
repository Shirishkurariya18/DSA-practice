#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Node {
    public:
    string key;
    int value;
    Node* next;

    Node(string key, int value){
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

class HashTable {

    int totSize;
    int currSize;
    Node** table;

    int hashFunction(string key){
        int idx = 0;

        for(int i = 0; i < key.length(); i++){
            idx += (key[i] * key[i]%totSize);
        }
        return idx%totSize;
    }

    void rehash(){
        Node** oldTable = table;
        int oldSize = totSize;

        totSize = 2*totSize;
        currSize = 0;
        table = new Node*[totSize];

        for(int i = 0; i < totSize; i++){
            table[i] = NULL;
        }

        for(int i = 0; i < oldSize; i++){
            Node* temp = oldTable[i];
            while(temp != NULL){
                insert(temp->key, temp->value);
                temp = temp->next;
            }
            if(oldTable[i] != NULL){
                delete oldTable[i];
            }
        }
        delete[] oldTable;

    }

    public:
    HashTable(int size = 5){
        totSize = size;
        currSize = 0;
        table = new Node*[totSize];
        for(int i = 0; i < totSize; i++){
            table[i] = NULL;
        }
    }

    void insert(string key , int value){
        int idx = hashFunction(key);

        Node* newNode = new Node(key, value);
        Node* head = table[idx];

        newNode->next = table[idx];
        table[idx] = newNode;

        currSize++;

        double lambda = currSize/(double)totSize;
        if(lambda > 1)
        {
            rehash();
        }
    }

    bool exists(string key){
        int idx =  hashFunction(key);

        Node* temp = table[idx];
        while(temp != NULL){
            if(temp->key == key){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
    int search(string key){

        int idx =  hashFunction(key);
    
            Node* temp = table[idx];
            while(temp != NULL){
                if(temp->key == key){
                    return temp->value;
                }
                temp = temp->next;
            }
            return -1;
    }
    void remove(string key){
        int idx =  hashFunction(key);
        Node* temp = table[idx];
        Node* prev = NULL;

        while(temp != NULL){
            if(temp->key == key){
                if(prev == NULL){
                    table[idx] = temp->next;
                }
                else{
                    prev->next = temp->next;
                }
                temp->next = NULL;
                delete temp;
                currSize--;
                return;
            }
            prev = temp;
            temp = temp->next;
        }
    }
    void print(){
        for(int i = 0; i < totSize; i++){
            cout << "idx" << i << " : ";
            Node* temp = table[i];
            while(temp != NULL){
                cout<<temp->key<<" : "<<temp->value<<endl;
                temp = temp->next;
            }
            cout<<endl;
        }
    }

};

int main(){

HashTable ht;
ht.insert("Mango", 100);
ht.insert("Apple", 100);
ht.insert("banana", 150);
ht.insert("grapes", 200);
ht.insert("orange", 50);


ht.remove("banana");
ht.print();
    return 0;
}