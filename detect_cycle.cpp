#include<iostream>
#include<vector>
using namespace std;

// detect a cycle in linkedlist 

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (!head) return false; // If the list is empty, there is no cycle

        ListNode* slow = head; // Slow pointer
        ListNode* fast = head; // Fast pointer

        while (fast && fast->next) { // While there are nodes to traverse
            slow = slow->next; // Move slow pointer by 1 step
            fast = fast->next->next; // Move fast pointer by 2 steps

            if (slow == fast) { // If the two pointers meet, there is a cycle
                return true;
            }
        }

        return false; // If we exit the loop, there is no cycle
    }
};

int main(){

    ListNode* head = new ListNode(1);
    head -> next = new ListNode(2);
    head -> next -> next = new ListNode(3);
    head -> next -> next -> next = head; // Create a cycle
    Solution solution;
    bool result = solution.hasCycle(head);
    cout << "Does the linked list have a cycle? " << (result ? "Yes" : "No") << endl; // Output: Yes
    return 0;
}