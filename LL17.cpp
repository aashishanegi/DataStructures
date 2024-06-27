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
    ListNode* find(ListNode* temp, int k)
    {
        int c=1;
        while(temp!=NULL)
        {
            if(c==k) return temp;
           
            temp=temp->next;
             c++;
            
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL ||head->next==NULL) return head;
        ListNode* tail= head;
        int len=1;
        while(tail->next!=NULL)
        {
            tail=tail->next;
            len++;
        }
        if(k%len==0) return head;
        k=k%len;
        tail->next =head;
        ListNode* newlast= find(head, len-k); //finding the last element of the ll
        head=newlast->next;
        newlast->next=NULL;
        return head;
    }
};
