/*
class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int val) : data(val), prev(nullptr), next(nullptr) {}
};
*/

class Solution {
public:
    ListNode* reverseDLL(ListNode* head) {
        // Your code goes here
        ListNode* curr=head;
        ListNode* newhead=NULL;
        while(curr!=NULL){
            ListNode* temp=curr->prev;
            curr->prev=curr->next;
            curr->next=temp;
            newhead=curr;
            curr=curr->prev;
        }
        return newhead;
    }
};
