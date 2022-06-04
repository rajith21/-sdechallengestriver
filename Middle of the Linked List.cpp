class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        struct ListNode* temp=head;
        struct ListNode* temp1=head;
        while(temp!=NULL&&temp->next!=NULL){
            temp1=temp1->next;
            temp=temp->next;
            temp=temp->next;
        }
        return temp1;
    }
};
