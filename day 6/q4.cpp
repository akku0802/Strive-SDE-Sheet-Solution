//https://leetcode.com/problems/palindrome-linked-list/
//Palindrome Linked List
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
    
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(head!=NULL)
        {
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        
        //edge cases
        if(head == nullptr || head->next == nullptr)
            return true;

        //finding a middile of a list
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast->next!=NULL && fast->next->next !=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        //reverse the list
        slow->next = reverseList(slow->next);
        slow=slow->next;
        
        //compare
        while(slow!=nullptr)
        {
            if(head->val != slow->val)
                return false; 
            head = head->next;
            slow = slow->next;
        }
        
        return true;    
    }
};