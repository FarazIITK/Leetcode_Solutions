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
    ListNode* deleteMiddle(ListNode* head) {
        // If the list is empty return 
        if(head == NULL) return head;
        
        // Copy the address of head in the temp         
        // So that we don't loose the address  of  head node
        ListNode* temp = head;
        int count = 0;
        
        // Count the number of nodes in LL
        while(temp != NULL){
            temp = temp -> next;
            count++;
        }
        
        // If there is only one node we have to remove it, So return NULL
        if(count == 1) return NULL;
        
        // Move the temp to the node just before the node to be removed
        temp = head;
        for(int i=0;i<(count/2 -1);i++){
            temp = temp -> next;
        }
        
        // temp2 is the node to be removed
        ListNode* temp2 = temp->next;
        
        // Adjust the links 
        temp -> next = temp2->next;
        
        return head;
        
    }
};