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
        ListNode* temp=head;
        int len=0;
        while(temp){ //fast!=NULL and fast next!=NULL
            len++;
            temp =temp->next;
            
        }
        int mid=len/2;
        temp=head;
        while(temp!=NULL and mid--!=NULL){
            temp=temp->next;
        }
        return temp;
        
    }
};
