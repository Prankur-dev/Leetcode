class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        //head=1
        //head->next=2
        //head->next->next=3

        if(head == NULL || head->next== NULL){
            return head;
        }
        ListNode*temp=head->next;
        head->next=swapPairs(head->next->next);
        temp->next=head;
        return temp;
    }
};