#include <stdlib.h>
#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;

void ReversePrint(struct Node* p);

void ReversePrint(struct Node* p){
    if (p == NULL || p->next == NULL) {
        head = p;
        return;
    }
    ReversePrint(p->next);
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;
}