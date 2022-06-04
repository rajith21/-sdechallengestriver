class Solution {
public:
    bool isPalindrome(ListNode* head) {
        struct ListNode* temp1=head;
        struct ListNode* temp2=head->next;
        while(temp2!=NULL&&temp2->next!=NULL){
            temp1=temp1->next;
            temp2=temp2->next;
            temp2=temp2->next;
        }
        struct ListNode* pr=temp1;
        struct ListNode* cu=temp1->next;
        struct ListNode* fu=cu;
        pr->next=NULL;
        while(cu!=NULL){
            fu=fu->next;
            cu->next=pr;
            pr=cu;
            cu=fu;
        }
         struct ListNode* temp=head;
        while(pr!=NULL&&temp!=NULL){
            if(pr->val!=temp->val){
                return 0;   
            }
            pr=pr->next;
            temp=temp->next;
        }
        return 1;
        
    }
};
