//static linear queue
#include<stdio.h>
#define MAX 5
typedef struct                     
{					    
    int data[MAX];
    int rear,front;
}QUEUE;

void init(QUEUE *q)
{
     q->rear=q->front=-1;
}
int IsFull(QUEUE *q)
{
     if(q->rear == MAX-1)
         return 1;
      else
         return 0;
} 
int IsEmpty(QUEUE *q)
{
     if(q->front==q->rear)
         return 1;
      else
         return 0;
} 
void addq(QUEUE *q,int ele)
{
     q->rear++;
     q->data[q->rear]=ele;
}
int deleteq(QUEUE *q)
{
     int ele;
     q->front++;
     ele=q->data[q->front];
     return ele;
}
int main()
{
    QUEUE q;
    int ch,ele;
    init(&q);
     do
     {
             printf("\n1: AddQ");
             printf("\n2:  DeleteQ");
             printf("\nEnter your choice");
             scanf("%d",&ch);
             switch(ch)
             {
                   case 1: if(IsFull(&q))
                                 printf("\nQUEUE overflow");
                            else
                               {
 					printf("\nEnter element");
                                   scanf("%d",&ele);
                                   addq(&q,ele);
                               } 
                          break;
			case 2:
                                if(IsEmpty(&q))
                                     printf("\nQUEUE underflow");
                                 else
                                    {
                                        ele=deleteq(&q);
                                        printf("\ndeleted element is:%d",ele);
                                    }
                          break;
              }//switch
     }while(ch!=0);
  return 0;
}











