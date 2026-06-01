#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
    
struct Node* head;

void Insert(int x);
void Show();

int main(){
    head = NULL; // empty list

    printf("How many numbers?\n");
    int n, i, x;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x);
        Show();
    }
}

void Insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Show(){
    struct Node* temp = head;
    printf("List is: ");
    while (temp != NULL) {
        printf("[%d | Next: %p] -> ", temp->data, temp->next);
        temp = temp->next;
    }
    printf("\n");
}