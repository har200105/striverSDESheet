
class Solution {
public:
ListNode* reverseKGroup(ListNode* head, int k) {
if(k==1 || k==0 || !head) return head;
ListNode* curr = head;
ListNode* next = NULL;
ListNode* prev = NULL;

    int count = 0;

    ListNode* temp = head;
    int cnt = 0;
    
    while(temp != NULL){
      temp = temp->next;
      cnt++;
    }
    if(cnt < k){
      return head;
    }

    while(curr != NULL && count < k){
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
      count++;
   }

   if(next != NULL){
     head->next = reverseKGroup(next, k);
   }

   return prev;
}
};