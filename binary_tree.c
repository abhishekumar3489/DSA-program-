#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;             // the value kept int this box
    struct node *left;   // address of the lift child
    struct node *right; // address of the right child
};
  
  int main() {
    struct node *root ;
    root = (struct node*)malloc (sizeof(struct node));
      root->data = 1;
      root->left = NULL;
      root->right = NULL;
    printf("rootnode%d",root->data);
    return 0;
  }
