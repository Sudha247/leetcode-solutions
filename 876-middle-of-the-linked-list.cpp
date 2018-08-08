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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp = head;
        //Count no of nodes
        int c = 0;
        while(temp != NULL){
            temp = temp->next;
            c++;
        }
        
        int i = 0;
        c = c/2;
        //if(c%2 == 0) c++;
        
        temp = head;
        
        while(i != c && temp->next != NULL){
            temp = temp->next;
            i++;
        }
        
        return temp;
        
    }
};
