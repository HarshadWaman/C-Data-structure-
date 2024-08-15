//quick sort.
#include<stdio.h>

int partition(int a[20],int lb,int ub)
{
    int dn,up,pivot,temp;
    dn=lb;
    up=ub;
    pivot=a[lb];
    do
    {
        while((a[dn] <=pivot) && (dn<=ub))
        dn++;
        while((a[up] > pivot) && (up>lb))
        up--;

        if(dn<up)
        {
            temp=a[dn];
            a[dn]=a[up];
            a[up]=temp;
        }
    }
    while(dn<up);
    a[lb]=a[up];
    a[up]=pivot;
    return up;
}

void quick_sort(int a[],int lb,int ub)
{
    int i;
    if(lb<ub)
    {
        i=partition(a,lb,ub);
        quick_sort(a,lb,i-1);
        quick_sort(a,i+1,ub);
    }
}

int main()
{
     int a[20],i,n;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    printf("\nsorted array is...\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}









