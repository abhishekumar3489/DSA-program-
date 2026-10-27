#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;             // the value kept int this box
    struct node *left;   // address of the lift child
    struct node *right; // address of the right child
};
  
  int main() {
    struct node *root, *n1, *n2; 

    root = (struct node*)malloc (sizeof(struct node));
    n1 = malloc(sizeof(struct node));
    n2 = malloc(sizeof(struct node));

    root->data = 10;
      root->left = n1;
      root->right = n2;
      n1->data = 20;
      n2->data = 30;
      root->left = NULL;
      root->right = NULL;

      n2->data = 30;
      n2->right = NULL;
      n2->right = NULL;
      printf("Root =%d\n", root->data);
      printf("Left child =%d/n", root->left->data);
      printf("Right Child =%d/n", root->right->data);
    return 0;
  }
