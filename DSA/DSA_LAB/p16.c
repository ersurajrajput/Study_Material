// program to add two polinomial using linked list
// program to add two polynomials using linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff, exp;
    struct Node* next;
};

void insertNode(struct Node** head, int coeff, int exp) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->coeff = coeff;
    new_node->exp = exp;
    new_node->next = *head;
    *head = new_node;
}

void display(struct Node* ptr) {
    while (ptr) {
        printf("%dx^%d", ptr->coeff, ptr->exp);
        ptr = ptr->next;
        if (ptr != NULL)
            printf(" + ");
    }
}

struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* res = NULL;
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->exp > poly2->exp) {
            insertNode(&res, poly1->coeff, poly1->exp);
            poly1 = poly1->next;
        } else if (poly1->exp < poly2->exp) {
            insertNode(&res, poly2->coeff, poly2->exp);
            poly2 = poly2->next;
        } else {
            insertNode(&res, poly1->coeff + poly2->coeff, poly1->exp);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1 != NULL) {
        insertNode(&res, poly1->coeff, poly1->exp);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        insertNode(&res, poly2->coeff, poly2->exp);
        poly2 = poly2->next;
    }
    return res;
}

int main() {
    struct Node* poly1 = NULL, * poly2 = NULL, * poly3 = NULL;

    insertNode(&poly1, 5, 2);
    insertNode(&poly1, 4, 1);
    insertNode(&poly1, 2, 0);

    insertNode(&poly2, 5, 1);
    insertNode(&poly2, 5, 0);

    printf("First polynomial: ");
    display(poly1);
    printf("\nSecond polynomial: ");
    display(poly2);

    poly3 =  addPolynomials(poly1, poly2);
    printf("\nSum of the polynomials: ");
    display(poly3);

    return 0;
}
