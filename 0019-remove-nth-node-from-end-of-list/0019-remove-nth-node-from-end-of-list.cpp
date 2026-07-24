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
            ListNode* dummy = new ListNode(0);
            dummy->next = head;
            ListNode* slow = dummy;
            ListNode* fast = dummy;
            for(int i=0;i<=n;i++){
                fast = fast->next;
                
            }
            while(fast != NULL){
                slow=slow->next;
                fast = fast->next;
                
            }
            slow->next = slow->next->next;
            return dummy->next;
        }



    // int letsize(ListNode* head){
    //     int sz= 0;
    //     ListNode* temp = head;
    //     while(temp != NULL){
    //         temp=temp->next;
    //         sz++;
    //     }
    //     return sz;
    // }
    // ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     int size = letsize(head);
    //     if (n == size) {
    //         ListNode* newHead = head->next;
    //         delete head;
    //         return newHead;
    //     }
    //     ListNode* temp = head;
    //     for(int i=0;i<(size-n-1);i++){
    //         temp =temp->next;
    //     }
    //     ListNode* toDel = temp->next;
    //     temp->next = temp->next->next;
    //     delete toDel;
    //     return head;
    // }
    
};