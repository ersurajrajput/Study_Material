#include <stdio.h>
struct node {
    int data;
    struct node *next;
}
struct node *head;

void display(struct node *ptr){
    if(ptr->next == NULL){
        printf("\nUnderFlow\n");
    }
    else{
        while(ptr->next != NULL){
            printf("%d",ptr->data);
            ptr = ptr->next;
        }
    }
}


int main(){
    struct node 

}

