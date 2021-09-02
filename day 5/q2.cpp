//Middle of the Linked List
//https://leetcode.com/problems/middle-of-the-linked-list/submissions/
//not impleminted insertion because code will become to lenthy
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
    ListNode* middleNode(ListNode* head) {
        if(head->next == nullptr)
            return head;
        else if (head->next->next == nullptr)
            return head->next;
     
        ListNode *fast=head,*slow=head;
        
        while(fast->next!=nullptr && fast->next->next != nullptr)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next == nullptr)
            return slow;
        return slow->next;
    }
};