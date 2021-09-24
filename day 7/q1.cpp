//Copy List with Random Pointer
//https://leetcode.com/problems/copy-list-with-random-pointer/

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* itr  = head;
        Node* front = head;
        
        //step 1
        while( itr != NULL)
        {
            front=itr->next;
            Node* copy = new Node(itr->val);
            
            itr->next = copy;
            copy->next=front;
            itr = front;   
        }
        
        //step 2
        itr=head;
        
        while(itr != NULL)
        {
            if(itr->random != NULL)
                itr->next->random = itr->random->next;
            itr=itr->next->next;
        }
        
        //step 3
        
        itr=head;
        Node* dummy = new Node(0);
        Node* copy=dummy;
        
        while(itr != NULL)
        {
            front=itr->next->next;
            copy->next=itr->next;
            itr->next=front;
            
            copy=copy->next;
            itr=itr->next;
        }
        
        return dummy->next;
    }
};