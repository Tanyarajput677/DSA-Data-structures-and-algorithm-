class Solution {
public:
    ListNode *deleteHead(ListNode *&head) {
        // Your code goes here
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        ListNode* temp=head;
        head=head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
};
