/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    // private:
    // void insertatTail(Node* &head , Node* & tail , int d){
    //     Node* NewNode = new Node(d);
    //     if(head == NULL){
    //         head = NewNode;
    //         tail = NewNode;
    //     }
    //     else{
    //         tail->next = NewNode;
    //         tail = NewNode;
    //     }
    // }
public:
    Node* copyRandomList(Node* head) {
    //     // step 1 create a clone list
    //     Node* CloneHead = NULL;
    //     Node* CloneTail = NULL;
    //     Node* temp = head;
    //     while(temp != NULL){
    //     insertatTail(CloneHead , CloneTail , temp->val);
    //     temp = temp->next;
    //     }
    //     // step 2 clonenode add in between
    //     Node* OriginalNode = head;
    //     Node* CloneNode = CloneHead;

    //     while(OriginalNode != NULL && CloneNode != NULL){

    //     Node* nextPointing = OriginalNode->next ;
    //     OriginalNode ->next = CloneNode;
    //     OriginalNode = nextPointing;

    //     nextPointing = CloneNode -> next;
    //     CloneNode->next = OriginalNode;
    //     CloneNode = nextPointing ;
    //     }

    //     // step 3 copy random pointer 
    //     temp = head;
    //     while(temp != NULL){
    //         if(temp->next != NULL){
    //             temp->next->random = temp->random ? temp->random->next : temp->random;
    //         }
    //         temp = temp->next;
    //     }

    //     // step 4 revert changes done in step 2
    //     OriginalNode = head;
    //     CloneNode = CloneHead;

    //     while(OriginalNode != NULL && CloneNode != NULL){
    //         OriginalNode -> next  = 
    //          -> next ;
    //         OriginalNode = OriginalNode -> next;

    //         if(OriginalNode  != NULL){
    //             CloneNode -> next = OriginalNode -> next ;
    //         }
    //         CloneNode = CloneNode -> next ;
    //     }
    // //  step 5 return answer 
    // return CloneHead;

    // https://leetcode.com/problems/copy-list-with-random-pointer/solutions/3002565/duplicating-nodes-c/
    
    if(head == NULL) return NULL;
        
        //add copy node after each node
        Node* ptr = head;
        while(ptr != NULL) {
            Node* newNode = new Node(ptr->val);
            newNode->next = ptr->next;
            ptr->next = newNode;
            ptr = ptr->next->next;
        }

        //joining random node of copy node wrt original node
        ptr = head;
        while(ptr != NULL) {
            if(ptr->random != NULL) {
                ptr->next->random = ptr->random->next;
            }
            ptr = ptr->next->next;
        }

        //separating copy nodes and forming a copy linked list
        //and regaining original links in original linked list
        ptr = head;
        Node* copyhead = new Node(-1);
        Node* nptr = copyhead;
        while(ptr != NULL) {
            nptr->next = ptr->next;
            ptr->next = ptr->next->next;
            ptr = ptr->next;
            nptr = nptr->next;
        }
        return copyhead->next;
    }
};
