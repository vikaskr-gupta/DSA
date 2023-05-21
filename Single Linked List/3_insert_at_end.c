#include <stdio.h>
#include <stdlib.h>
typedef struct insertEnd
{
    int info;
    struct insertEnd *next;
} node;

void display(node *start)
{
    while (start != NULL)
    {
        printf("%d\t",start->info);
        start = start->next;
    }
}

void insert_at_end(node **start, int item)
{
    node *temp, *loc;
    temp = (node *)malloc(sizeof(node));
    temp->info = item;
    temp->next = NULL;
    if (*start == NULL)
    {
        *start = temp;
    }
    else
    {
        loc = *start;
        while (loc->next != NULL)
            loc = loc->next;
        loc->next = temp;
    }
}

void main()
{
    node *head = NULL;
    int item;
    while (1)
    {
        printf("\nEnter Item:\n");
        scanf("%d", &item);
        insert_at_end(&head, item);
        printf("\nInserted Item is : ");
        display(head);
    }
}