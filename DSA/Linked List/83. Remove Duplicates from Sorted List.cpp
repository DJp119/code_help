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
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head == NULL) return NULL;
//     ListNode* curr = head;
//     while(curr != NULL){
//         if((curr->next != NULL) && (curr->val == curr->next->val)){
//             ListNode* Next_Next = curr->next->next;
//             ListNode* Node_to_delete = curr->next;
//             delete(Node_to_delete);
//             curr = Next_Next;
//         }
//         else{
//             curr = curr->next;
//         }

//     }
//             return head;
//     }
// };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *ans = head;
        while(ans && ans->next){
            if(ans->val == ans->next->val) ans->next = ans->next->next;
            else ans = ans->next;
        }
        return head;
    }
};
