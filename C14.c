// Single Cricular linked list
#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    int info;
    struct node *next;
}NODE;

NODE *start,*temp,*newnode;
NODE *create(NODE *start)
{
    int n,i;
    printf("Enter no of nodes:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        newnode=(NODE *)malloc(sizeof(NODE));
        printf("Enter data:- ");
        scanf("%d",&newnode->info);
        newnode->next=NULL;
        if(start==NULL)
        {
            start=temp=newnode;
            newnode->next=start;
        }
        else
        {
            temp->next=newnode;
            newnode->next=start;
            temp=newnode;
        }
    }
    return start;
}

void display(NODE *start)
{
    for(temp=start;temp->next!=start;temp=temp->next)
    {
        printf("\n%d   %u",temp->info,temp->next);
    }
    printf("\n%d  %u",temp->info,temp->next);
}

int main()
{
    start=NULL;
    start=create(start);
    display(start);
    return 0;
}









