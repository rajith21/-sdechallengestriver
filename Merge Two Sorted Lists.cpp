class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        struct ListNode* p1=list1;
        struct ListNode* p2=list2;
        struct ListNode* head=NULL;
        if(p1==NULL){
            return p2;
        }else if(p2==NULL){
            return p1;
        }else if(p1==NULL&&p2==NULL){
            return NULL;
        }
        if(p1->val > p2->val){
            head=p2;
            p2=p2->next;
            
        }else{
            head =p1;
            p1=p1->next;
        }
        struct ListNode* temp=head;
        while(p1!=NULL&&p2!=NULL){
            if(p1->val > p2->val){
                temp->next=p2;
                p2=p2->next;
                temp=temp->next;
                

            }else{
                temp->next=p1;
                p1=p1->next;
                temp=temp->next;
            }
        }
        if(p1==NULL){
            temp->next=p2;
        }else temp->next=p1;
        return head;
        
    }
};
