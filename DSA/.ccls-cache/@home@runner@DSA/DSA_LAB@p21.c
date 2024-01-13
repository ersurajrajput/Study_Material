// write a c program to find the travesal order of binary search tree 
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *left, *right;
};

struct Node* newNode(int item) {
  struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = item;
  temp->left = temp->right = NULL;
  return temp;
}

void inorder(struct Node* root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d \n", root->data);
    inorder(root->right);
  }
}

void preOrder(struct Node* root) {
  if (root != NULL) {
    printf("%d \n", root->data);
    preOrder(root->left);
    preOrder(root->right);
  }
}

void postOrder(struct Node* root) {
  if (root != NULL) {
    postOrder(root->left);
    postOrder(root->right);
    printf("%d \n", root->data);
  }
}

int main() {
  struct Node* root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);

  printf("Inorder traversal of binary search tree is: \n");
  inorder(root);

  printf("Preorder traversal of binary search tree is: \n");
  preOrder(root);

  printf("Postorder traversal of binary search tree is: \n");
  postOrder(root);

  return 0;
}
