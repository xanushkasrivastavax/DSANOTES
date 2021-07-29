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
        int len = 0;
        ListNode* fast = head;
        ListNode* slow = head;
		
        while(fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        if(fast != NULL)
        {
            slow = slow -> next;
        }

        ListNode* curr = slow;
        ListNode* prev = NULL;
        ListNode* next;
        while(curr)
        {
            next = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
		
        while(prev && head)
        {
            if(prev -> val != head -> val)
            {
                return false;
            }
            prev = prev -> next;
            head = head -> next;
        }
        
        return true;
    }
};
