class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
    if (head == NULL)
        return NULL;
 
   
    ListNode *odd = head;
    ListNode *even = head->next;

    ListNode *evenFirst = even;
 
    while (1)
    {
        if (!odd || !even || !(even->next))
        {
            odd->next = evenFirst;
            break;
        }
        odd->next = even->next;
        odd = even->next;

        if (odd->next == NULL)
        {
            even->next = NULL;
            odd->next = evenFirst;
            break;
        }
 
        // Connecting even nodes
        even->next = odd->next;
        even = odd->next;
    }
 
    return head;
}
};



