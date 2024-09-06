// list creation
#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int info;
    struct node *next;
} NODE;

NODE *start,*temp,*newnode;
NODE*create(NODE *start)
{
    int n,i;
    printf("Enetr no of nodes:- ");
    scanf("%d",&n);             
    for(i=0;i<n;i++)
    {
        newnode=(NODE *)malloc(sizeof(NODE));
        printf("Enter data:- ");
        scanf("%d",&newnode->info);
        newnode->next==NULL;
        if(start==NULL)
        {
            start=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
    return start;
}

NODE *InsertMiddle(NODE *start,int pos)
{
    int i=1;
    temp=start;
    newnode=(NODE *)malloc(sizeof(NODE));
    printf("Enetr data:- ");
    scanf("%d",&newnode->info);
    newnode->next=NULL;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return start;
}

NODE *InsertFirst(NODE *start)
{
    newnode=(NODE *)malloc(sizeof(NODE));
    printf("Enter data:- ");
    scanf("%d",&newnode->info);
    newnode->next=NULL;
    newnode->next=start;
    start=newnode;
    return start;
}

NODE *Insertlast(NODE *start)
{
    newnode=(NODE *)malloc(sizeof(NODE));
    printf("Enter data:- ");
    scanf("%d",newnode->info);
    newnode->next=NULL;
    for(temp=start;temp->next!=NULL;temp=temp->next);
    temp->next=newnode;
    return start;
}

void display(NODE *start)
{
    for(temp=start;temp->next!=NULL;temp=temp->next)
        printf("\n%d\t%u",temp->info,temp->next);
}

int search(NODE *start,int key)
{
    int i; 
    for(temp=start;temp->next!=NULL;temp=temp->next,i++)
    {
        if(temp->info == key)
        return i;
    }
    return -1;
}

NODE *deleteFirst(NODE *start)
{
    temp=start;
    start=start->next;
    free(temp);
    return start;
}

int main()
{
    start=NULL;
    int ch,key,ans,pos;
    do
    {
        printf("\n 1: create");
        printf("\n 2: display");
        printf("\n 3: search");
        printf("\n 4: insert at first position");
        printf("\n 5: insert in middle position");
        printf("\n 6: insert at the last position");
        printf("\n 7: Delete first position");
        printf("\n Enter your choice:- ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:start=create(start);
                  break;

            case 2:display(start);
            break;

            case 3:printf("\nEnetr key to search:- ");
             scanf("%d",&key);
             ans=search(start,key);
             if(ans==-1)
             printf("\n *** Element does not exist ***");
             else
             printf("\n*** Element foun at %d position ***",ans);
             break;

             case 4:start=InsertFirst(start);
             break;

             case 5:printf("\nEnter position:- ");
             scanf("%d",&pos);
             start=InsertMiddle(start,pos);
             break;

             case 6: start=Insertlast(start);
             break;

             case 7:start=deleteFirst(start);
             break;

        }
    }
    while(ch!=0);
    return 0;
}
