#include<stdio.h>
int fact(int n)
{
  //int fact=1;
  if(n==1)
  return n;
  else
  return n*fact(n-1);
}
void main()
{
  int n,t;
  printf("Enter the number : ");
  scanf("%d",&n);
  t=fact(n);
  printf("the fact of %d is %d ",n,t);
}
