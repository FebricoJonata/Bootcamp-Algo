#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value; // store value of the Node
    Node *next; // points to the next Node
} *head, *tail; // first and last node in the LL

Node *createNode(int value) {
    Node *newNode = (Node*)malloc(sizeof(Node)); // allocate memory for new node
    newNode->value = value; // initialize the value of the Node to the parameter
    newNode->next = NULL; // by default, newNode->next will be NULL
    return newNode; // return the newly created Node
}

void pushTail(int value) { // insert node at the end of the LL
    Node *temp = createNode(value); // create the new node

    if(!head) { // if head is NULL (LL is empty)
        head = tail = temp; // this node will be the first and last node in LL
    } else { // if LL has >= 1 node
        tail->next = temp; // head -> tail -> NULL will be head -> tail -> temp
        tail = temp; // temp will be the new tail (last element in LL)
    }
}

void pushHead(int value){
    Node *temp = createNode(value);

    if(!head) { // if head is NULL (LL is empty)
        head = tail = temp; // this node will be the first and last node in LL
    }else { // if LL has >= 1 node
        temp->next = head; // head -> tail -> NULL will be head -> tail -> temp
        head = temp; // temp will be the new tail (last element in LL)
    }

}

// void popTail(){

//     if(head == tail){
//         free(head);
//         head = tail = NULL;
//     }else{ // if LL has > 1 Node

//         Node *curr = head;
//         while(curr->next != tail){
//             curr* curr->next;
//         }

//         Node *toRemove = tail;
//         free(toRemove);
//         toRemove = NULL;
//     }
// }


void printLL() {
    puts("LINKED LIST: ");
    Node *temp = head;

    while(temp != tail->next) {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }

    puts("NULL");
}

int main() {
    pushTail(10);
    pushTail(15);
    pushTail(20);
    pushTail(25);
    pushTail(30);
    printLL();
    return 0;
}