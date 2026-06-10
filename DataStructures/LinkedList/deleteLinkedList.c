#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};  

struct Node* head;

void Insert(int data);
void Delete(int n);
void Show();

int main (){
    head = NULL;
    Insert(2); // 2
    Insert(3); // 2,3   
    Insert(4); // 2,3,4
    Insert(5); // 2,3,4,5
    Show();
    int n;
    printf("Enter the position to delete: ");
    scanf("%d", &n);
    Delete(n); 
    Show();
}

void Insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Delete(int n){
    struct Node* temp1 = head;

    if (n == 1){
        head = temp1->next;
        free(temp1);
        return;
    }

    for (int i = 0; i < n - 2 ;i ++){
        temp1= temp1->next;
    }
    struct Node* temp2 = temp1->next;
    temp1->next = temp2->next;  
    free(temp2);
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