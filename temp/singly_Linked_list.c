#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;

struct node *newNode()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    return ptr;
}

void insertAtLast(int data)
{
    struct node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct node *p = newNode();
    ptr->next = p;
    p->data = data;
    p->next = NULL;
}

void insertionAtBegining(int data)
{
    struct node *p = newNode();
    p->data = data;
    p->next = head;
    head = p;
}
// void insertAtindex(int data, int index)
// {
//     struct node *ptr = head;
//     struct node *p = newNode();
//     p->data = data;
//     for (int i = 0; i < index; i++)
//     {
//         ptr = ptr->next;
//     }
//     p->next = ptr->next;
//     ptr->next = p;
// }

void insertAtindex(int data,int index){
    struct node *ptr = head;
    struct node *p = newNode();
    p->data = data;
    int i = 0;
    while (i!= index-1)
    {
        ptr = ptr->next;
        i++;

    }
    p->next = ptr->next;
    ptr->next = p;
    
}
void deletionAtStart(){
    struct node *ptr = head;
    head = head->next;
    free(ptr);
}
void deletionAtLast(){
    struct node *ptr = head->next;
    struct node *p = head;

    while (ptr->next != NULL)
    {
        p = p->next;
        ptr = ptr->next;
    }
    p->next = NULL;

   
    free(ptr);
   

    

}
void deletionAtindex(int index){
    struct node * p = head;
    struct node * ptr = head->next;
    int i = 0;
    while (i!=index -1)
    {
        p = p->next;
        ptr = ptr->next;
        i++;
    }
    p->next = ptr->next;
    free(ptr);
    
}

void display()
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->next == NULL)
        {
            printf(" %d->NULL", ptr->data);
        }
        else
        {,
            printf(" %d->", ptr->data);
        }
        ptr = ptr->next; // Traversing the List till end
    }
}

int main()
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    head = p;
    p->next = NULL;
    p->data = 1;
    insertAtLast(2);
    insertionAtBegining(10);
    insertionAtBegining(11);
    insertionAtBegining(12);
    insertAtindex(100,2);
    deletionAtindex(2);
    deletionAtindex(2);

    // deletionAtStart();
    // deletionAtLast();
    // deletionAtLast();
    

    display();
}