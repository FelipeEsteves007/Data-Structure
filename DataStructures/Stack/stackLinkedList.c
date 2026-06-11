#include <stdio.h>

struct Node {
    int data;
    struct Node* link;
};

struct Node* top = NULL;

void push(int x);
void pop();

void pop() {
    struct Node* temp;
    if (top == NULL) {
        printf("Error: Stack underflow\n");
        return;
    }
    temp = top;
    top = top->link;
    free(temp);
}

void push(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->link = top;
    top = temp;
}