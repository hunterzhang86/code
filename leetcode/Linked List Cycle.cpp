/**
title: Linked List Cycle

Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL)
            return false;

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast -> next && fast -> next -> next)    // fast走在前面，所以要判断 fast -> next 是否为NULL
        {
            slow = slow -> next;
            fast = fast -> next -> next;

            if (slow == fast)   // 前后指针相遇则肯定有Cycle
                return true;
        }

        return false;
    }
};