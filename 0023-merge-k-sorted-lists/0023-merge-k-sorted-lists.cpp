
class Solution {
public:

    ListNode*mergeTwoLinkedlist(ListNode*L1,ListNode*L2){
        if(L1==NULL)  return L2;
        if(L2==NULL)  return L1;

        if(L1->val<=L2->val){
           L1->next = mergeTwoLinkedlist(L1->next,L2);
            return L1;
        }
        else{
            L2->next = mergeTwoLinkedlist(L1,L2->next);
            return L2;
        }

        return NULL;
    }

    ListNode* mergeAndpartition(vector<ListNode*>& lists,int start,int end){
        if(start>end){
            return NULL;
        }
        else if(start==end){
            return lists[start];
        }

        int mid=start+(end-start)/2;
        ListNode* L1 = mergeAndpartition(lists,start,mid);
        ListNode* L2 = mergeAndpartition(lists,mid+1,end);

        return mergeTwoLinkedlist(L1,L2);

    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       int k=lists.size();
       if(k==0)
       return NULL;


       return mergeAndpartition(lists,0,k-1);
    }
};