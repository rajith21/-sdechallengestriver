class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        struct ListNode* temp1=head;
        struct ListNode* temp2=head;
        for(int i=0;i<n;i++){
            temp2=temp2->next;
        } 
        if(temp2==NULL){
            return temp1->next;
        }
        
        while(temp2->next!=NULL){
            temp1=temp1->next;
            temp2=temp2->next;
        }
       
        temp2=temp1->next;
        temp2=temp2->next;
        temp1->next=temp2;
        return head;
        
    }
};
