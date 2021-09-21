node *reverseRecur(node* &head){
	if(head==NULL || head->next==NULL){
		return head;
	}
	node *newHead = reverseRecur(head->next);
	head->next->next=head;
	head->next=NULL;

	return newHead;
}