#include<stdio.h>
int main()
{
  int a=0,b=1,c,i,e;
  printf("enter a num :");
  scanf("%d",&e);
  printf("%d\t%d\t",a,b);
  for(i=2;i<e;i++)
  {
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
  }
  return 0;
}
