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
private:
    ListNode* rev(ListNode* l1){
        ListNode* curr = l1;
        ListNode* next = NULL;
        ListNode* prev = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next  = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* addElement(ListNode* l3){
        if(l3 == NULL) {
            
        }
    }
    ListNode* add(ListNode* l1, ListNode* l2){
        int sum  = 0 ;
        int carry = 0 ;
        ListNode* hehe = NULL;
        while(l1 != NULL && l2 != NULL ){
        int digit = 0;
        sum = l1->val + l2 -> val + carry ;
        digit = sum %10 ;
        carry = sum/10;
        hehe -> val = digit ;
        hehe = hehe->next ;
        l1 = l1->next;
        l2 = l2->next;
        }
        return hehe;
    } 
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // reverse the list 
        l1 = rev(l1);
        l2 = rev(l2);
        // ListNode* l3 = NULL;
        //  addition of two LL 
        ListNode* ans = NULL;
        ans  = add(l1,l2);
        //  reverse the final answer
        ans = rev(ans);
        return ans;
    }
};
