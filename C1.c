//binary search
#include<stdio.h>
int search(int a[],int n,int key)
{
    int mid,top,bottom;
    top=0;
    bottom=n-1;
    while (top<=bottom)
    {
        mid=(top+bottom)/2;
        if(a[mid]==key)
            return mid;

        else

        if (key < a[mid])
                bottom=mid-1;

        else
                top=mid+1;
                
    } 
    return -1;
}
int main()
{
    int a[20],i,n,key,ans;
    printf("\nEnter number of element: ");
    scanf("%d",&n);
    printf("\nenter sorted array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter key to search: ");
    scanf("%d",&key);
    ans = search(a,n,key);
    if(ans==-1)
        printf("\nelement does not exist");
      else
        printf("\nElement is present at %d position",ans);

   return 0;         
}
