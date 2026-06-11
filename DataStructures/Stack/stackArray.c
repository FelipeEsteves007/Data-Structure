#include <stdio.h>
#define MAX_SIZE 101 // constants
int stack[MAX_SIZE];
int top = -1;

void push(int x);
void pop();

int main(){
    push(10);
    push(20);

    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }

    printf("\n");
    pop();
    push(40);

     for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }

    return 0;
}

void push(int x) {
    if (top == MAX_SIZE - 1) {
        printf("Error: Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

void pop() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
        return;
    }
    top--;
}