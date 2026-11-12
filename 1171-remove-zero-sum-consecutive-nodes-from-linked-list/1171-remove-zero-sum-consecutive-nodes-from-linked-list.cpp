class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixSum = 0;
        unordered_map<int, ListNode*>mp;
        ListNode* dummyNode=new ListNode(0);
        dummyNode->next=head;
        mp[0]=dummyNode;
        while(head!=NULL){
            prefixSum+=head->val;
            // delete the node
            if(mp.find(prefixSum)!=mp.end()){
                ListNode* start= mp[prefixSum];
                ListNode* temp=start;

                int prefixsum=prefixSum;
                while(temp!=head){
                    temp=temp->next;
                    prefixsum+=temp->val;

                    if(temp!=head){
                        mp.erase(prefixsum);
                    }
                }
                start->next=head->next;
            }
            else{
                mp[prefixSum]=head;
            }
            head=head->next;
        }
        return dummyNode->next;
    }
};