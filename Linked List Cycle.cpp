class Solution {
public:
    bool hasCycle(ListNode *head) {
        struct ListNode* temp1=head;
        struct ListNode* temp2=head;
        while(temp1!=NULL&&temp2!=NULL){
            temp2=temp2->next;
            if(temp1==temp2){
                return 1;
            }
            if(temp2==NULL){
                return 0;
            }
            temp1=temp1->next;
            temp2=temp2->next;
            
        }
        return 0;
    }
};
