#include<stdio.h>
int fact(int n)
{
  int fact=1,i;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
    return fact;
}
void main()
{
  int n,t;
  printf("Enter the number : ");
  scanf("%d",&n);
  t=fact(n);
  printf("fact of %d is %d",n,t);
}
