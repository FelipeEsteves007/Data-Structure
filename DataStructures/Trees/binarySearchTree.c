#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct BstNode {
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

struct BstNode* rootPtr;

struct BstNode* GetNewNode(int data) {
    struct BstNode* newNode = (struct BstNode*)malloc(sizeof(struct BstNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct BstNode* Insert(struct BstNode* root, int data){
    if (root == NULL) {
        return GetNewNode(data);
    }
    else if (data <= root->data) {
        root->left = Insert(root->left, data);
    }
    else {
        root->right = Insert(root->right, data);
    }
    return root;
}

bool Search(struct BstNode* root, int data) {
    if (root == NULL) {
        return false;
    }
    else if (root->data == data) {
        return true;
    }
    else if (data <= root->data) {
        return Search(root->left, data);
    }
    else {
        return Search(root->right, data);
    }
}

int main() {
    struct BstNode* rootPtr = NULL;
    rootPtr = Insert(rootPtr, 5);
    rootPtr = Insert(rootPtr, 3);
    rootPtr = Insert(rootPtr, 7);
    rootPtr = Insert(rootPtr, 1);
    rootPtr = Insert(rootPtr, 4);
    printf("Searching for 3 in the BST: ");
    Search(rootPtr, 3) ? printf("Found\n") : printf("Not Found\n");
    return 0;
}