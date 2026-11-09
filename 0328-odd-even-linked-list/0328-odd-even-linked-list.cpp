/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


// hame odd and even ko segregate krna ha only
//  1. sabse phele odd and even 2 pointer le lenge 
//  2. even and odd dono type ke nodes nikal lenge and then at last 
//  dono ko connect kr denge 
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // Corner Case(Base Case)
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode*odd=head;
        ListNode*even=head->next;

        ListNode*evenStart=head->next;
        while(even!=NULL && even->next!=NULL){
            odd->next=even->next;
            even->next=even->next->next;

            odd=odd->next;
            even=even->next;
        }

        odd->next=evenStart;

        return head;


    }
};