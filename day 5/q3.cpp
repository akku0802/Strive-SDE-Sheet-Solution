// Merge two sorted Linked List
//https://leetcode.com/problems/merge-two-sorted-lists/submissions/
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr)
            return l2;
        if(l2 == nullptr)
            return l1;
        ListNode* newhead=nullptr;
        
        if(l1->val <= l2->val)
        {
            ListNode* temp= l1;
            newhead =temp;
            l1=l1->next;
        }
        else 
        {
            ListNode* temp= l2;
            newhead =temp;
            l2=l2->next;
        }
        
        ListNode* curr = newhead;
        
        while(l1!=nullptr && l2!=nullptr)
        {
            if(l1->val <= l2->val)
            {
                ListNode* temp = l1;
                curr->next = temp;
                l1=l1->next;
            }
            else
            {
                ListNode* temp = l2;
                curr->next = temp;
                l2=l2->next;
            }
            curr=curr->next;
        }
        while(l1!=nullptr)
        {
            
            ListNode* temp = l1;
            curr->next = temp;
            l1=l1->next;
            curr=curr->next;
        }
        while(l2!=nullptr)
        {   
             ListNode* temp = l2;
            curr->next = temp;
            l2=l2->next;
            curr=curr->next;
        }
        return newhead;
    }
};