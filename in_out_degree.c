#include <stdio.h>
void createmat(int m[10][10], int n)
{
  int i, j;
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
    {
      m[i][j] = 0;
      if (i != j) // non diagonal vertex
      {
        printf("\n Is there an edge between %d   and %d(1/0)", i + 1, j + 1);
        scanf("%d", &m[i][j]);
      }
    }

} // createmat
void dispmat(int m[10][10], int n)
{
  int i, j;

  printf("\nAdjacency matrix is.........\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("\t%d", m[i][j]);
    } // for
    printf("\n");
  }
} // dispmat
void count_degree(int m[10][10], int n)
{
  int i, j;
  int indegree, outdegree, total;
  printf("\nVertex\tIndegree\tOutdegree\t Total\n");
  for (i = 0; i < n; i++)
  {
    indegree = 0;
    outdegree = 0;
    for (j = 0; j < n; j++)
    {
      outdegree = outdegree + m[i][j];
      indegree = indegree + m[j][i];
    } // for
    printf("\n\tV%d\t%d\t%d\t%d", i + 1, indegree, outdegree, indegree + outdegree);
  }
}
int main()
{
  int m[10][10], n;
  printf("Enter no of vertices");
  scanf("%d", &n);
  createmat(m, n);
  dispmat(m, n);
  count_degree(m, n);
  return 0;

}