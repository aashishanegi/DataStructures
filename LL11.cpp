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
        int count=0;
        ListNode* temp=head;
        if (head == NULL) {
        return NULL;
    }
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if (count == n) {
        ListNode* newhead = head->next;
        delete (head);
        return newhead;
    }
        int res = count - n;
        temp = head;
        while (temp != NULL) 
        {
            res--;
            if(res==0)
            {
                ListNode* del=temp->next;
                temp->next=temp->next->next;
                delete (del);
            }
            temp=temp->next;
        }
    return head;
    }
};
