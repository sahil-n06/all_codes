#include<stdio.h>
//int fact(int a);
int fact(int a)
{
  int sum=1,i,j,x,fact,d=1;
  for(j=2;j<=a;j++)
  {
    fact=1;
    for(i=2;i<=j;i++)
    {
    fact=fact*i;
    }
    d=d+j/fact;
  }
    return d;
  }
void main()
{
  int x,a;
  printf("enter a num : ");
  scanf("%d",&a);
  x=fact(a);
  printf("%d",x);
}
