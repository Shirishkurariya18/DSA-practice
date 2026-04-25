#include<iostream>
#include<vector>
using namespace std;

// 👉 Rotate a linked list to the right by k places
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};  
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || k == 0) return head; // If the list is empty or no rotation needed

        // First, find the length of the list and the last node
        ListNode* last = head;
        int length = 1; // Start with 1 to count the head
        while (last->next) {
            last = last->next;
            length++;
        }

        // Connect the last node to the head to make it circular
        last->next = head;

        // Calculate the effective rotations needed
        k = k % length; // In case k is greater than length
        int stepsToNewHead = length - k; // Steps to reach the new head

        // Move to the new tail node
        ListNode* newTail = last;
        for (int i = 0; i < stepsToNewHead; ++i) {
            newTail = newTail->next;
        }

        // The new head is the next node after the new tail
        ListNode* newHead = newTail->next;

        // Break the circular link to finalize the rotated list
        newTail->next = nullptr;

        return newHead; // Return the new head of the rotated list
    }
};

int main(){
    
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    int k = 2; // Number of rotations
    Solution solution;
    ListNode* rotatedHead = solution.rotateRight(head, k);

    // Print the rotated list
    cout << "Rotated list: ";
    ListNode* current = rotatedHead;
    while (current) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl; // Output: Rotated list: 4 5 1 2 3

    return 0;
}