class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        struct ListNode * temp1=headA;
        struct ListNode * temp2=headB;
        int k=0;
        while(1){
            if(temp1==temp2){
                return temp1;
            }
            if(temp1==NULL){
                k++;
                temp1=headB;
            }else {
                temp1=temp1->next;
            }
            if(temp2==NULL){
                temp2=headA;
            }else temp2=temp2->next;
            
            if(k>1){
                return NULL;
            }
        }

    }
};
