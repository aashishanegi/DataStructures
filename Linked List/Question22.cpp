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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode* temp=head;
        ListNode* nextnode=head->next;
        int last=head->val;
        while(nextnode!=NULL)
        {
            if(nextnode->val == last)
            {
                if(nextnode->next==NULL)
                {
                    temp->next=NULL;
                    break;
                }
                nextnode=nextnode->next;
                temp->next=nextnode;
            }
            else
            {
                temp=nextnode;
                last=temp->val;
                nextnode=nextnode->next;
            }
        }
        return head;
    }
};
