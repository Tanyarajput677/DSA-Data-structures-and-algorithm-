class Solution {
public:
    int findLengthOfLoop(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                int cnt=1;
                fast=fast->next;
                while(slow!=fast){
                    cnt++;
                    fast=fast->next;
                }
                return cnt;

            }
        }
        return 0;

    }
};
