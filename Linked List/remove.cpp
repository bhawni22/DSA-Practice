//REMOVE Nth NODE FROM END

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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tail=head;
        ListNode* curr;
        ListNode* nextnode;
        int count=1;
        while(tail->next!=NULL){
            count++;
            tail=tail->next;
        }
        int m=count-n;
        if(m==0){
            curr=head;
            head=head->next;
            delete curr;
            return head;

        }
        ListNode* prev=head;
        for(int i=0;i<m-1;i++){
            prev=prev->next;
        }
        
        
        curr=prev->next;
        nextnode=curr->next;
        prev->next=nextnode;
        delete curr;
        return head;

    }
    
};