#include<stdio.h>
void sum();
void div(int a,int b);
int mul(int a,int b);
void sub(int a,int b);
void main()
{
  int a,b,m;
  printf("Enter 1 num : ");
  scanf("%d",&a);
  printf("Enter 2 num : ");
  scanf("%d",&b);
  /*A=a;
  B=b;*/
  sum();
  sub(a,b);
  m=mul(a,b);
  printf("mul = %d\n",m);
  div(a,b);
}
void sum()
{
  printf("Enter 1 num : ");
  scanf("%d",&a);
  printf("Enter 2 num : ");
  scanf("%d",&b);
  printf("sum is : %d\n",b+a);
}
void div(int a,int b)
{
  printf("division is = %d\n",a/b);
}
int mul(int a,int b)
{
  return a*b;
}
void sub(int a,int b)
{
  printf("subtraction is = %d\n",a-b);
}
