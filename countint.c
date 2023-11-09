#include<stdio.h>
int main()
{    int c=0,d=0,f=0,e,a;
  char x;
  do
  {
    printf("enter a number :");
    scanf("%d",&a);
    if(0<a)
    c++;
    else if(0>a)
    d++;
    else
    f++;
    printf(" \npress y to countiue and n to exit :");
    scanf(" %c",&x);
  }
  while(x!='n' && x!='N');
  printf("positive numbers are = %d\nnegative numbers are = %d\nnumber of zeroes are = %d",c,d,f);
  return 0;
}
