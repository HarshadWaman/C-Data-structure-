
#include<stdio.h>
#include<string.h>
void bubble_sort(char a[10][20],int n)
{
    int pass,i,swapcount,count = 0;
    char temp[20];
    for(pass =1;pass < n;pass++)
    {
        count =0;
        swapcount =0;
        for(i=0;i<n-pass;i++)
        {

             count++;
             if(strcmp(a[i] , a[i+1])>0)
        {  strcmp(temp ,a[i]);
            strcmp(temp,a[i]);
            strcmp(a[i+1],temp);
            swapcount =1;
        }
    }
        printf("\ncomparison:%d pass:%d",count,pass);
        if (swapcount =0)
        
            break;
        
        }
}
int main()
{
    char a[10][20];
    int i,n;
    printf("\nEnter number of element:-");
    scanf("%d",&n);
    printf("\nEnter array elements:-");
    for(i=0;i<n;i++)
     scanf("%s",&a[i]);
    bubble_sort(a,n);
    printf("\nsorted array is..\n");
    for(i=0;i<n;i++)
    printf("%s\t",a[i]);
    return 0;
}
