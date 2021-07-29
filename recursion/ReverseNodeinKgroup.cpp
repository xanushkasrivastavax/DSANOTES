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
    ListNode* reverseKGroup(ListNode* head, int k) {
            ListNode* it = head;
    int count = 0;
    while (it) {
        ++count;
        if (count == k) {
            break;
        }
        it = it->next;
    }
    if (count < k)
        return head;
    
    ListNode* post = reverseKGroup(it->next, k);
    
    ListNode* prev = NULL, *cur = head, *next = NULL;
    for (int i = 0; i < k; ++i) {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    
    head->next = post;
    
    return prev;
        
        
    }
};
