// program to find smallest node in binary search tree
#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left, *right;
};

struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = item;
  temp->left = temp->right = NULL;
  return temp;
}

struct node *insert(struct node *node, int data) {
  if (node == NULL)
    return newNode(data);
  if (data < node->data)
    node->left = insert(node->left, data);
  else if (data > node->data)
    node->right = insert(node->right, data);
  return node;
}

struct node *minValueNode(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;
  return current;
}

int main() {
  struct node *root = NULL;
  root = insert(root, 4);
  insert(root, 2);
  insert(root, 10);
  insert(root, 3);
  insert(root, 6);
  insert(root, 5);
  insert(root, 7);

  struct node *min = minValueNode(root);
  printf("The smallest node in the BST is: %d", min->data);
  return 0;
}
