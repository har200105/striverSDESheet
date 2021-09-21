void deletetion(node* &head ,int val){
	node *temp = head;
	while(temp->next->data!=val){
		temp=temp->next;
	}
	node *todelete = temp->next;
	temp->next=temp->next->next;

	delete todelete;
}


void deleteFirst(node* &head){
	node *todelete=head;
	head=head->next;

	delete todelete;
}




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     void deleteNode(ListNode* node) {
//         ListNode *temp = node;
//         node->val = node->next->val;
//         node->next=node->next->next;
//     }
// };