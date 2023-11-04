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
typedef int ll;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) {
            return head;
        }
        ListNode* ptr = head;
        ListNode* prev = NULL;
        //just visualise the solution
        while(ptr) {
            //keeping next node
            ListNode* next = ptr->next;
            //pointing to prev node
            ptr->next = prev;
            //updating prev
            prev = ptr;
            //moving to the current linked list
            ptr = next;
        }
        return prev;
    }
};