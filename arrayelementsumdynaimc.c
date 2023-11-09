#include<stdio.h>
#include<stdlib.h>
int sum(int *p,int n)
{
  int *q,i,j,sum=0;
  q=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    q[i]=p[i];
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      sum=p[i]+q[j];
    }
    p[i]=sum;
    sum=0;
  }
}
void main()
{
  int *p,n;
  printf("Enter the num of size : ");
  scanf("%d",&n);
  p=(int *)malloc(n*sizeof(int));
  int i;
  printf("Enter the value : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&p[i]);
  }
  sum(p,n);
  for(i=0;i<n;i++)
  printf("%d",p[i]);
}
