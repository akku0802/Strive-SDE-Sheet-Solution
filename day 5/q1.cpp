//Reverse a LinkedList
//https://leetcode.com/problems/reverse-linked-list/
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
    ListNode* reverseList(ListNode* head) {
        
        if(head ==nullptr || head->next == nullptr)
            return head;
        ListNode *prev =nullptr, *curr=head,*nxt=head->next;
        
        while(curr->next!= nullptr)
        {
            curr->next=prev;
            prev=curr;
            curr=nxt;
            nxt=nxt->next;
        }
        curr->next=prev;
        prev=curr;
        head=prev;
        return head;
    }
};