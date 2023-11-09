#include<stdio.h>
void fibo(int n,int j)
{
  int a=0,b=1,c,i,arr[n];
  for(i=0;i<n;i++)
  {
    if(i==0)
    printf("%d",a);
    else if(i==1)
    printf("%d",b);
    else
    c=a+b;
    scanf("%d",&arr[i]);
    a=b;
    b=c;
  }
  for(i=0;i<j;i++)
  {
    printf("%d",arr[i]);
  }
}
void main()
{
  int n,j,k,i;
  printf("enter the number of rows : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      fibo(n,j);
    }
    printf("\n");
  }
}
