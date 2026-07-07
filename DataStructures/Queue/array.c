#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

int A[10];
int front = -1;
int rear = -1;

bool IsEmpty() {
    if (front == -1 && rear == -1) { 
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
        rear++;
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
        front++; 
    }
}

bool IsFull() {
    if (rear == 9) { 
        return true;
    } else {
        return false;
    }
}