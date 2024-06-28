/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertcopy (Node* head)
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            Node *copy = new Node (temp->val);
            copy->next=temp->next;
            temp->next=copy;
            temp=temp->next->next;
        }
    }
    void insertrandom(Node *head)
    {
    Node* temp=head;
        temp=head;
        while(temp!=NULL)
        {
            Node* copy=temp->next;
            if(temp->random !=NULL)
            {
            copy->random=temp->random->next;
            }
            else
            {
                copy->random=NULL;
            }
            temp=temp->next->next;
        }
    }
    Node* getDeepCopyList(Node* head){
    Node *temp=head;
        Node *dummy=new Node(-1);
        Node *res=dummy;
        temp=head;
        while(temp!=NULL)
        {
            res->next=temp->next;
            temp->next=temp->next->next;
            res=res->next;
            temp=temp->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        insertcopy(head);
        insertrandom(head);
        return getDeepCopyList(head);
    }
};
