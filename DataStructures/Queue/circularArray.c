#include <stdio.h>
#include <stdbool.h>

int A[10];
int N = 10; 
int front = -1;
int rear = -1;

bool IsEmpty() {
    return (front == -1 && rear == -1);
}

bool IsFull() {
    if ((rear + 1) % N == front) {
        return true;
    } else {
        return false;
    }
}

void Enqueue(int x) {
    if (IsFull()) {
        printf("Error: Queue is full\n");
        return;
    } else if (IsEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % N; 
    }
    A[rear] = x;
}

void Dequeue() {
    if (IsEmpty()) {
        printf("Error: Queue is empty\n");
        return;
    } else if (front == rear) {
        front = rear = -1; 
    } else {
        front = (front + 1) % N;
    }
}