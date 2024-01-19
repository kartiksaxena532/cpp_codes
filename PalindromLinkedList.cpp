/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* front = head; // front pointer to traverse the list
        return checkPalindrome(front, head);
    }

private:
    bool checkPalindrome(ListNode*& front, ListNode* current) {
        if (current == nullptr) {
            return true; // If we reach the end of the list, it is a palindrome
        }

        // Recursive call to check if the rest of the list is a palindrome
        if (!checkPalindrome(front, current->next)) {
            return false;
        }

        // Check if the values match during backtracking
        if (front->val != current->val) {
            return false;
        }

        // Move the front pointer for the next comparison
        front = front->next;

        return true;
    }
};
