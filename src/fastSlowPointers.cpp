#include "fastSlowPointers.h"
ListNode* medium19_removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0,head);//方便fast移动到末尾时，slow刚好时待删节点的前一个节点
    ListNode* fast=head;
    ListNode* slow=dummy;
    for (int i = 0; i < n; i++)
    {
        fast=fast->next;
    }
    while(fast){
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    ListNode* ans=dummy->next;
    delete dummy;
    return ans;
}