// binary search useing recurtion ...
#include<stdio.h>

int recbinary_search(int a[],int top,int bottom,int key)
{
    int mid;
    if(top <= bottom)
    {
        mid = (top + bottom)/2;
        if(a[mid]==key)
        return mid;
        else
        if(key <a[mid])
        return recbinary_search(a,top,mid-1,key);
        else
        return recbinary_search(a,mid+1,bottom,key);
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
    ans = recbinary_search(a,0,n-1,key);
    if(ans==-1)
        printf("\nelement does not exist");
      else
        printf("\nElement is present at %d position",ans);

   return 0;         
}
