class Solution {
public:
    void deleteNode(ListNode* node) {
        struct ListNode* temp=node;
        temp=temp->next;
        node->val=temp->val;
        node->next=temp->next;
    }
};
