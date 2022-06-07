#include<unordered_map>
class LFUCache
{
public:
    class Node{
        public: 
        int data;
        int k;
        Node* next;
        Node* prev;
    };
    Node* head=new Node;
  
    Node* tail=new Node;

    int Siz;
    unordered_map<int,Node*>um;
    LFUCache(int capacity)
    {
        Siz=capacity;
          head->prev=NULL;
         tail->next=NULL;
         tail->prev=head;
        head->next=tail;
        // Write your code here
    }
    void del(Node* temp){
         Node* tempn= temp->next;
        Node* tempp=temp->prev;
        tempp->next=tempn;
        tempn->prev=tempp;
        delete temp;
    }
    void del_en(){
        Node* temp=tail;
        temp=temp->prev;
        int x=temp->k;
        um.erase(x);
        temp=temp->prev;
        delete temp->next;
        temp->next=tail;
        tail->prev=temp;
    }
   Node*  ins_head(int key, int val){
       Node* temp=head->next;
       Node* n= new Node;
       n->data=val;
       n->k=key;
       head->next=n;
       n->prev=head;
       n->next=temp;
       temp->prev=n;

       return n;
    }
    int get(int key)
    { 
         if(um.find(key)==um.end()){
             return -1;
         }
        Node* temp=um[key];
        int y=temp->data;
        del(temp);
        um[key] = ins_head(key,y);
        return y;
    }

    void put(int key, int value)
    {
       if(um.find(key)==um.end()){
           if(um.size()>=Siz){
               del_en();
               um[key]=ins_head(key,value);
           }else {
                um[key]=ins_head(key,value);
           }
       }else{
         del(um[key]);
         um[key]=ins_head(key,value);
       }
    }
};
