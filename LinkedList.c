#include<stdio.h>
#include<stdlib.h>

//Initializing the Linked List

struct node
{
    int data;
    struct node *next;
};

//Printing the Linked List

void print(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    }
}

//Insertion at the Beginning

struct node * beginning(struct node *head, int data)
{
    struct node *ptr = (struct node*)(malloc(sizeof(struct node)));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}

//Insertion at the End

struct node *appendNode(struct node *head, int data)
{
    struct node *ptr  =(struct node*)(malloc(sizeof(struct node)));
    struct node *p = head;
    while(p -> next != NULL)
    {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    ptr -> data = data;
    return head;
}

//Insertion at Particular Position

struct node* InsertAtPosition(struct node *head, int data, int position)
{
    struct node * ptr = (struct node*)(malloc(sizeof(struct node)));
    struct node *p = head;
    int count = 0;
    while (count != (position-1))
    {
        p = p -> next;
        count++;
    }
    ptr -> next = p -> next;
    ptr -> data = data;
    p -> next = ptr;
    return head;
}

//Deleting the very first node

struct node * DeleteFront(struct node* head)
{
    struct node *ptr = head;
    head = head -> next;
    free(ptr);
    return head;
}

//Deleting the Last Node

struct node * DeleteEnd(struct node* head)
{
    struct node *p = head;
    struct node *q = head -> next;
    while (q -> next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
    free(q);
    return head;
}

//Deleting a Particular Node

struct node * DeleteAtPosition(struct node* head, int position)
{
    struct node *p = head;
    struct node *q = head -> next;
    int count = 0;
    while (count != (position-1))
    {
        p = p -> next;
        q = q -> next;
        count ++;
    }
    p -> next = q -> next;
    free(q);
    return head;
}

//The Main !!

void main()
{
    //Creating The Linked List
    
    struct node *head = (struct node*)(malloc(sizeof(struct node)));
    struct node *first = (struct node*)(malloc(sizeof(struct node)));
    struct node *second = (struct node*)(malloc(sizeof(struct node)));
    struct node *end = (struct node*)(malloc(sizeof(struct node)));
    head -> data = 1;
    first -> data = 2;
    second -> data = 3;
    end -> data = 4;
    head -> next = first;
    first -> next = second;
    second -> next = end;
    end -> next = NULL;

    //Performing the Operations
    
    head = beginning(head, 5);
    head = appendNode(end, 6);
    head = InsertAtPosition(head, 7, 2);
    head = DeleteFront(head);
    head = DeleteEnd(head);
    head = DeleteAtPosition(head, 2);
    print(head);
}
