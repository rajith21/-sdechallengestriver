class Solution {
public:
    ListNode* reverseList(ListNode* head) {
            struct ListNode* pr=NULL;
            struct ListNode* cu=head;
        if(head==NULL){
            return head;
        }
        struct ListNode* fu=head;
        while(cu!=NULL){
            fu=fu->next;
            cu->next=pr;
            pr=cu;
            cu=fu;
            
        }
        return pr;
            
    }
};
