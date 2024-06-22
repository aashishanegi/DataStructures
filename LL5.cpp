/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
	if(head==NULL) return head;
	if(pos==0)
	{
		head=head->next;
		return head;
	}
	int cnt=-1;
	Node* temp=head;
	Node* prev=NULL;
	while(temp->next!=NULL)
	{
		cnt++;
		if(cnt==pos)
		{
			prev->next=prev->next->next;
			return head;
		}
		prev=temp;
		temp=temp->next;
	}
	return head;
}
