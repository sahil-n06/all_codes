#include<stdio.h>
#include<stdlib.h>
void main()
{
  int r,c,i,j;
  printf("Enter the rows : ");
  scanf("%d",&r);
  printf("Enter the number of columns :");
  scanf("%d",&c);
  int *p[r];
  for(i=0;i<r;i++)
  {
    p[i]=(int *)malloc(c*sizeof(int));
  }
  printf("ENter elements : \n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    scanf("%d",&p[i][j]);
  }
  printf("\n\n\n\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    printf(" %d ",p[i][j]);
    printf("\n");
  }
}
