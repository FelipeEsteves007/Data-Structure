#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

void Show(struct Node* head);
struct Node* Insert(struct Node* head, int data);

int main (){
    struct Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    Show(head);
    return 0;
}

void Show (struct Node* p){
    if (p == NULL) {
        return;
    }
    printf("%d ", p->data); // first print the data of the current node
    Show(p->next); // Recursively call Show on the next node
} 

struct Node* Insert(struct Node* head, int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}