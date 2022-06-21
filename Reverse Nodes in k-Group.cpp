class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        struct ListNode* temp=head;
        int si=0;
        while(temp!=NULL){
             si++;
             temp=temp->next;
         }   
        if(k==1||head==NULL){
            return head;
        }
        //cout<<si<<endl;
       temp=NULL;
        struct ListNode* cu=head;
        struct ListNode* pr=head;
        struct ListNode* fu=head->next;
        int x=si/k;
        cout<<x<<endl;
        for(int j=0;j<x;j++){
          //  cout<<"HII"<<endl;
            struct ListNode* start=cu;
            for(int i=1;i<k;i++){
                cu=fu;
                fu=fu->next;
                cu->next=pr;
                pr=cu;

            }
            if(j==0){
                head=cu; 
            }
            if(temp==NULL){
                
            }else {
                temp->next=cu;
            }
            
             temp=start;
            if(j==x-1){
                temp->next=fu;
                cout<<temp->val;
                return head;
            }
            cu=fu;
            if(fu==NULL){
                temp->next=fu;
                return head;
            }
            fu=fu->next;
            pr=cu;
            cout<<j<<endl;
        }
        return head;
    }
};
