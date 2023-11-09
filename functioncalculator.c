#include<stdio.h>
void sum(int a,int b);
void div(int a,int b);
void mul(int a,int b);
void sub(int a,int b);
void main()
{
  int a,b;
  printf("Enter 1 num : ");
  scanf("%d",&a);
  printf("Enter 2 num : ");
  scanf("%d",&b);
  sum(a,b);
  sub(a,b);
  mul(a,b);
  div(a,b);
}
void sum(int a,int b)
{
  printf("sum is : %d\n",a+b);
}
void div(int a,int b)
{
  printf("division is = %d\n",a/b);
}
void mul(int a,int b)
{
  printf("multipilication is = %d\n",a*b);
}
void sub(int a,int b)
{
  printf("subtraction is = %d\n",a-b);
}
