#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
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
Node * getMiddle(Node* head){
    if(head == NULL && head->next == NULL){
        return head;
    }
    if(head ->next->next == NULL ){
        return head->next;
    }
    Node* slow= head;
    Node* fast = head->next;
    while(fast != NULL){
        fast = fast -> next ;
        if(fast != NULL){
            fast = fast -> next ;
        }
        slow = slow -> next;
    }
    return slow;
}
int Cnt(Node *head){
    int k=0 ;
    while(head != NULL){
        k++;
        head = head->next;
    }
    return k;
}
Node *findMiddle(Node *head) {
    getMiddle(head);
    /*
    int n , k ;
    Node *prev = NULL, *curr = head;
    n=Cnt(head);  // we got number of terms in linked list 
    int ans = n/2 ;
    Node * temp = head;
    int cnt = 0;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
    */
//     if(n%2==0){
//         while(curr != NULL && k<n/2){
//             curr = curr->next;
//             k++;
//         }
//         return curr;
//     }
//     else{
//         while(curr != NULL && k<n/2+1){
//             curr = curr->next;
//             k++;
//         }
//         return curr;
//     }
    
//     while(curr != NULL){
//         if(n%2==0){
//             for(int i = 0 ; i<n/2;i++){
//                 curr = curr->next;
//             }
//             return curr;
//         }
//         else {
//             for(int i = 0 ; i<n/2+1;i++){
//                 curr = curr->next;
//             }
//             return curr;
//         }
 
    
    
    
    // Write your code here
}
