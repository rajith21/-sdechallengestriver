class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        struct ListNode* slow=head;
        struct ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next;
            fast=fast->next;
            slow=slow->next;
            if(slow==fast){
               struct ListNode* entry=head;
               while(entry!=slow){
                   entry=entry->next;
                   slow=slow->next;
                   
               }
                return entry;
            }
        }
        return NULL;
    }
};
