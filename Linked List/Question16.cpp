/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map <ListNode* ,int> mpp;
        while(head!=NULL)
        {
            if(mpp.find(head) != mpp.end()) return head;
            mpp[head]=1;
            head=head->next;
        }
        return NULL;
    }
};
