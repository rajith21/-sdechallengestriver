#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
	        Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node* temp1=head1;
    Node* temp2=head2;
    Node* temp3=NULL;
    int c =0;
    while(temp1!=NULL&&temp2!=NULL){
        int x=temp1->data+temp2->data+c;
        c=x/10;
        x=x%10;
        temp1->data=x;
        if(temp1->next==NULL){
            temp3=temp1;
        }
        temp1=temp1->next;
        
        temp2=temp2->next;
    }
    if(temp1==NULL){
        while(temp2!=NULL){
            int x=temp2->data+c;
            c=x/10;
            x=x%10;  
           
            temp3->next=new Node(x);
           
            temp3=temp3->next;
            temp2=temp2->next;
        }
        if(c!=0){
            temp3->next=new Node(c);
        }
    }else if(temp2==NULL){
         while(temp1!=NULL){
            int x=temp1->data+c;
            c=x/10;
            x=x%10;  
          temp1->data=x;
            if(temp1->next==NULL){
                temp3=temp1;
            }
            temp1=temp1->next;
        
        }
         if(c!=0){
            temp3->next=new Node(c);
           
        }
        
    }
    return head1;
}
