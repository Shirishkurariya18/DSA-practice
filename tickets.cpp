#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

void printIteneary(unordered_map<string, string> tickets){

    unordered_set<string> to;

    for (pair<string, string> ticket : tickets)
    {
       to.insert(ticket.second);
    }
    string start = "";
    for(pair<string, string> ticket : tickets){
        if(to.find(ticket.first) == to.end()){
            start = ticket.first;
        }
    }
    cout << start << " -> ";
    while (tickets.count(start))
    {
       cout << tickets[start] << " -> ";
       start = tickets[start];
    }
    cout << "destination\n";
    
}

int main(){

    unordered_map<string, string> tickets;
    tickets["chennai"] = "Bangaluru";
    tickets["mumbai"] = "delhi";
    tickets["goa"] = "chennai";
    tickets["delhi"] = "goa";

    printIteneary(tickets);

    return 0;
}