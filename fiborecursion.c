#include<stdio.h>
int fibo(int i)
{
  if(i==0||i==1)
  return i;
  else
  return fibo(i-1) + fibo(i-2);
}
void main()
{
  int x,n,i;
  printf("Enter how many element you want to print of an fibonacii series : ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    x=fibo(i);
    printf("  %d  ",x);
  }
}
