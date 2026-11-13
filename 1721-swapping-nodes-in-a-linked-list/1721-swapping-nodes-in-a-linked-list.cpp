
class Solution {
public:

    int findLength(ListNode*head){
        int l=0;
        while(head){
            head=head->next;
            l++;
        }
        return l;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int L=findLength(head);
        int k1=k;
        ListNode*Node1=head;
        while(k1>1){
            Node1=Node1->next;
            k1--;
        }

        int k2=L-k+1;
        ListNode*Node2=head;
        while(k2>1){
            Node2=Node2->next;
            k2--;
        }

        swap(Node1->val,Node2->val);

        return head;
    }
};