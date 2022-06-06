class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
       int s=0;
       struct ListNode* temp=head;
        while(temp!=NULL){
            s++;
            temp=temp->next;
        }
        if(s==0){
            return head;
        }
        k=k%(s);
        if(k==0){
            return head;
        }
        temp=head;
        for(int i=1;i<s-k;i++){
            temp=temp->next;
        }
         struct ListNode* temp1=temp->next;
        struct ListNode* temp2=temp1;
        temp->next=NULL;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=head;
        return temp2;
        
    }
};
