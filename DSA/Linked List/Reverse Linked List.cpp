#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the LinkedListNode class:
    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

Node* rec1(LinkedListNode<int>* &head){
//      base case 
    if(head == NULL || head->next == NULL){
        return head;
    }
    LinkedListNode<int> *chotaHead = rec1(head->next);
    head ->next ->next = head;
    head ->next = NULL;
    return chotaHead;
}
void reverse(LinkedListNode<int> * &head,LinkedListNode<int> *curr ,LinkedListNode<int>* prev){
//      base case 
        if(curr== NULL){
            head = prev;
            return;
        }
    LinkedListNode<int>* forward = curr->next;
    reverse(head,forward,curr);
    curr->next = prev;
}

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    
    return rec1(head);
    /*
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* prev = NULL;
    reverse(head,curr,prev);
    return head;
    /*
    
//     empty list ka case 
    if(head == NULL || head->next==NULL){
        return head;
    }
    
    LinkedListNode<int>* prev = NULL;
    LinkedListNode<int>* curr = head;
    LinkedListNode<int>* forward = NULL;
    while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
    }
    return prev;
    // Write your code here
    */
}
