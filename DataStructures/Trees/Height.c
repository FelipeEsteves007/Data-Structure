#include <stdio.h>
#include <stdlib.h>

// height of a binary tree:
// number of edges on the longest path from the root to a leaf node

struct BstNode {
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

int Findheight(struct BstNode* root) {
    if (root == NULL) {
        return -1; // height of an empty tree is -1
    } else {
        int leftHeight = Findheight(root->left);
        int rightHeight = Findheight(root->right);
        return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
    }
}