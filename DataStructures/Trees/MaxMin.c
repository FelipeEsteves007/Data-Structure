#include <stdio.h>
#include <stdlib.h>

struct BstNode {
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

int FindMin(BstNode* root){
    if (root == NULL) {
        printf("Error: Tree is empty\n");
        return -1; // Return an error value
    }
    while (root->left != NULL) {
        root = root->left;
    }
    return root->data;
}

int FindMax(BstNode* root){
    if (root == NULL) {
        printf("Error: Tree is empty\n");
        return -1; // Return an error value
    }
    while (root->right != NULL) {
        root = root->right;
    }
    return root->data;
}