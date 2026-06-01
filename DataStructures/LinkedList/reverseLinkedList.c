#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

struct Node* Reverse(struct Node* head);
struct Node* Insert(struct Node* head, int data);
void Show(struct Node* head);

int main (){
    struct Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    Show(head);
    head = Reverse(head);
    Show(head);
    return 0;
}

struct Node* Reverse(struct Node* head) {
    struct Node *temp, *prev, *current;

    //head -> [10 | next] -> [20 | next] -> [30 | NULL]
    current = head; // 10
    prev = NULL; // null
    
    while (current != NULL) { 
        temp = current->next;   // temp = 20 end
        current->next = prev;   // 10 end = null 
        prev = current;        //  null = 10
        current = temp;      // current= 20
    }
    head = prev; 
    return head;
}

struct Node* Insert(struct Node* head, int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    head = temp;
    return head;
}

void Show(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}