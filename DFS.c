#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
void recdfs(int m[10][10],int n, int v)
{
      int w;
      static int visited[20]={0};
      visited[v]=1;
      printf("v%d",v+1);
      for(w=0;w<n;w++)
      {
	  if((m[v][w]==1) && (visited[w]==0))
	  {
		recdfs(m,n,w);
	  }
      }
}
void createmat(int m[10][10], int n)
{
    int i,j;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
	m[i][j]=0;
	if(i!=j)
	{
	      printf("\n Is there an edge between %d   and %d(1/0)",i+1,j+1);
	      scanf("%d",&m[i][j]);
	}
    }

 }//createmat
 void dispmat(int m[10][10],int n)
 {
	int i,j;

    printf("\nAdjacency matrix is.........\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
     {
	 printf("\t%d",m[i][j]);
     }//for
     printf("\n");
    }
}//dispmat

int main()
{
     int m[10][10],n;
     printf("Enter no of vertices");
     scanf("%d",&n);
     createmat(m,n);
     dispmat(m,n);
     printf("DFS of graph is........\n");
     recdfs(m,n,0);
     return 0;
}